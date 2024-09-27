#include "PmergeMe.hpp"

// CONSTRUCTORS


PmergeMe::PmergeMe()
{
    // std::cout << "Default constructor called" << std::endl;
}

PmergeMe::~PmergeMe()
{
    // std::cout << "Default destructor called" << std::endl;

}

PmergeMe::PmergeMe (PmergeMe const &copy)
{
    *this = copy;
}


// = OPERATOR
PmergeMe &PmergeMe::operator=(PmergeMe const &source)
{
    if (this != &source)
    {
         this->start = source.start;
        this->end = source.end;
        this->passedTime = source.passedTime;
    }
    return *this;
}

clock_t startTimer()
{
    return clock();  // Inicia o temporizador
}

clock_t endTimer()
{
    return clock();  // termina o temporizador
    // end = clock();  // Finaliza o temporizador
    // passedTime = double(end - start) / CLOCKS_PER_SEC;  // Calcula o tempo decorrido em segundos
    // std::cout << "Tempo decorrido: " << passedTime << " segundos" << std::endl;
}


// PARSE

// bool PmergeMe::verifyarg(char **argv, std::vector<int> &vec, std::deque<int> &deque)
// {
//     int nbr;
//     for (int i = 1; argv[i]; i++) // Começa em 1 para ignorar argv[0]
//     {
//         std::stringstream ss(argv[i]);
//         while (ss >> nbr) // Enquanto houver números para ler
//         {
//             if (nbr < 0 || std::find(vec.begin(), vec.end(), nbr) != vec.end())
//                 return false;
//             vec.push_back(nbr);
//             deque.push_back(nbr);
//         }
//         if (!ss.eof()) // Se não for o final do stream, houve erro de conversão
//             return false;
//     }
//     return true;
// }

bool PmergeMe::verifyarg(char **argv, std::vector<int> &vec, std::deque<int> &deque)
{
	int					nbr;
	std::stringstream	ss;
	std::string 		total;

	total = std::string(argv[0]);	
	for (int i = 1; argv[i]; i++)
		total += " " + std::string(argv[i]);	
	ss << total;
	while (!ss.eof())
	{
		if (!(ss >> nbr))
			return (false);
		if (nbr < 0)
			return (false);
		if (std::find(vec.begin(), vec.end(), nbr) != vec.end())
			return (false);
		vec.push_back(nbr);
		deque.push_back(nbr);
	}
	return (true);
}






// VECTOR METHODS


double  PmergeMe::mergeInsertionSort(std::vector<int> &nbrs)
{
    std::vector<std::vector<int> >  pairs;
    std::vector<int>                V;

    // start = std::chrono::high_resolution_clock::now();
    start = startTimer(); 
    makePairs(nbrs, pairs);
    mergeSort(pairs);
    for (size_t i = 0; i < pairs.size() && pairs[i][A] != NOPAIR; i++)
        V.push_back(pairs[i][A]);
    insertJakobSort(V, nbrs.size(), pairs);
    // end = std::chrono::high_resolution_clock::now();
    end = endTimer();  // Finaliza o temporizador
    // passedTime = this->end - this->start;
    passedTime = double(end - start) / CLOCKS_PER_SEC;  // Calcula o tempo decorrido em segundos
    nbrs = V;
    return passedTime;
}   




void PmergeMe::makePairs(const std::vector<int> &nbrs, std::vector<std::vector<int> >&pairs)
{
    size_t  pairsNbr = std::ceil(nbrs.size() / 2);

    pairs.resize(pairsNbr);
    pairs.assign(pairsNbr, std::vector<int>(2));
    for (size_t i = 0; i < pairs.size(); i++)
    {
        if ((2 * i) == nbrs.size())
        {
            pairs[i][A] = MIN(nbrs[2 * i], nbrs[2 * i + 1]);
            pairs[i][B] = MAX(nbrs[2 * i], nbrs[2 * i + 1]);
        }
        else
        {
            pairs[i][A] = NOPAIR;
        }
    }
}

void PmergeMe::mergeSort(std::vector<std::vector<int> >&pairs)
{
    std::vector<std::vector<int> > leftValue(pairs.begin(), pairs.begin() + pairs.size() / 2);
    std::vector<std::vector<int> >rightvalue(pairs.begin() + pairs.size() / 2, pairs.end());

    if (pairs.size() == 1)
        return;
    mergeSort(leftValue);
    mergeSort(rightvalue);
    mergeResult(leftValue, rightvalue, pairs);
}

void PmergeMe::mergeResult(std::vector<std::vector<int> >&leftValue, std::vector<std::vector<int> >&rightValue, std::vector<std::vector<int> >&result)
{
    result.clear();
    while(!leftValue.empty() && !rightValue.empty())
    {
        if (leftValue[0][A] < rightValue[0][A] || rightValue[0][A] == NOPAIR)
        {
            result.push_back(leftValue.front());
            leftValue.erase(leftValue.begin());
        }
        else
        {
            result.push_back(rightValue.front());
            rightValue.erase(rightValue.begin());
        }
    }
    while(!leftValue.empty())
    {
        result.push_back(leftValue.front());
        leftValue.erase(leftValue.begin());
    }
    while(!rightValue.empty())
    {
        result.push_back(rightValue.front());
        rightValue.erase(rightValue.begin());
    }
}

void PmergeMe::insertJakobSort(std::vector<int> &V, size_t n, const std::vector<std::vector<int> > &pairs)
{
    std::vector<size_t>     jakobSeq(pairs.size());

    generateJacobsthalSequence(jakobSeq);
    binarySearch(V, pairs[0][B]);
    if (pairs.size() > 1)
        binarySearch(V, pairs[1][B]);
    for (size_t i = 1; i < jakobSeq.size(); i++)
    {
        for(size_t k = jakobSeq[i]; k > jakobSeq[i - 1]; k--)
        {
            	if (k >= pairs.size())
				continue ;
			binarySearch(V, pairs[k][B]);
			if (V.size() == n)
				return ;
        }
    }

}

void PmergeMe::generateJacobsthalSequence(std::vector<size_t> &vec)
{
	for (size_t i = 0; i < vec.size(); i++)
		vec[i] = (pow(2, i + 2) - pow(-1, i + 2)) / 3;
}

void PmergeMe::binarySearch(std::vector<int> &S, int number)
{
	int start, middle, end;

	start = 0;
	end = S.size() - 1;
	while (start <= end)
	{
		middle = start + (end - start) / 2;
		if (number > S[middle])
			start = middle + 1;
		else if (number < S[middle])		
			end = middle - 1;
	}
	S.insert(S.begin() + start, number);
}








// DEQUE METHODS


double  PmergeMe::mergeInsertionSort(std::deque<int> &nbrs)
{
    std::deque<std::deque<int> >  pairs;
    std::deque<int>                V;

    // start = std::chrono::high_resolution_clock::now();
    start = startTimer(); 
    makePairs(nbrs, pairs);
    mergeSort(pairs);
    for (size_t i = 0; i < pairs.size() && pairs[i][A] != NOPAIR; i++)
        V.push_back(pairs[i][A]);
    insertJakobSort(V, nbrs.size(), pairs);
    // end = std::chrono::high_resolution_clock::now();
    end = endTimer();  // Finaliza o temporizador
    // passedTime = this->end - this->start;
    passedTime = double(end - start) / CLOCKS_PER_SEC;  // Calcula o tempo decorrido em segundos
    nbrs = V;
    return passedTime;
}   


void PmergeMe::makePairs(const std::deque<int> &nbrs, std::deque<std::deque<int> > &pairs)
{
    size_t  pairsNbr = std::ceil(nbrs.size() / 2);

    pairs.resize(pairsNbr);
    pairs.assign(pairsNbr, std::deque<int>(2));
    for (size_t i = 0; i < pairs.size(); i++)
    {
        if ((2 * i) == nbrs.size())
        {
            pairs[i][A] = MIN(nbrs[2 * i], nbrs[2 * i + 1]);
            pairs[i][B] = MAX(nbrs[2 * i], nbrs[2 * i + 1]);
        }
        else
        {
            pairs[i][A] = NOPAIR;
        }
    }
}

void PmergeMe::mergeSort(std::deque<std::deque<int> >&pairs)
{
    std::deque<std::deque<int> > leftValue(pairs.begin(), pairs.begin() + pairs.size() / 2);
    std::deque<std::deque<int> >rightvalue(pairs.begin() + pairs.size() / 2, pairs.end());

    if (pairs.size() == 1)
        return;
    mergeSort(leftValue);
    mergeSort(rightvalue);
    mergeResult(leftValue, rightvalue, pairs);
}

void PmergeMe::mergeResult(std::deque<std::deque<int> > &leftValue, std::deque<std::deque<int> > &rightValue, std::deque<std::deque<int> > &result)
{
    result.clear();
    while(!leftValue.empty() && !rightValue.empty())
    {
        if (leftValue[0][A] < rightValue[0][A] || rightValue[0][A] == NOPAIR)
        {
            result.push_back(leftValue.front());
            leftValue.erase(leftValue.begin());
        }
        else
        {
            result.push_back(rightValue.front());
            rightValue.erase(rightValue.begin());
        }
    }
    while(!leftValue.empty())
    {
        result.push_back(leftValue.front());
        leftValue.erase(leftValue.begin());
    }
    while(!rightValue.empty())
    {
        result.push_back(rightValue.front());
        rightValue.erase(rightValue.begin());
    }
}

void PmergeMe::insertJakobSort(std::deque<int> &V, size_t n, const std::deque<std::deque<int> > &pairs)
{
    std::deque<size_t>     jakobSeq(pairs.size());

    generateJacobsthalSequence(jakobSeq);
    binarySearch(V, pairs[0][B]);
    if (pairs.size() > 1)
        binarySearch(V, pairs[1][B]);
    for (size_t i = 1; i < jakobSeq.size(); i++)
    {
        for(size_t k = jakobSeq[i]; k > jakobSeq[i - 1]; k--)
        {
            	if (k >= pairs.size())
				continue ;
			binarySearch(V, pairs[k][B]);
			if (V.size() == n)
				return ;
        }
    }

}

void PmergeMe::generateJacobsthalSequence(std::deque<size_t> &vec)
{
	for (size_t i = 0; i < vec.size(); i++)
		vec[i] = (pow(2, i + 2) - pow(-1, i + 2)) / 3;
}

void PmergeMe::binarySearch(std::deque<int> &S, int number)
{
	int start, middle, end;

	start = 0;
	end = S.size() - 1;
	while (start <= end)
	{
		middle = start + (end - start) / 2;
		if (number > S[middle])
			start = middle + 1;
		else if (number < S[middle])		
			end = middle - 1;
	}
	S.insert(S.begin() + start, number);
}





