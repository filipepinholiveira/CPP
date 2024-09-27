#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <ctime>
#include <limits>

#define A 0
#define B 1
#define NOPAIR -1
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

class PmergeMe
{
    private:

        const std::string type;

        clock_t start;   // Substituindo std::chrono
        clock_t end;     // Substituindo std::chrono
        double passedTime;  // Para armazenar o tempo decorrido



    public:

        PmergeMe();
        PmergeMe (PmergeMe const &copy);
        ~PmergeMe();

        PmergeMe &operator=(PmergeMe const &source);

        bool    verifyarg(char ** argv, std::vector<int> &vec, std::deque<int> &deque);
        double  mergeInsertionSort(std::vector<int> &nbrs);
        double  mergeInsertionSort(std::deque<int> &nbrs);


        // VECTOR METHODS
        void makePairs(const std::vector<int> &nbrs, std::vector<std::vector<int> >&pairs);
        void mergeSort(std::vector<std::vector<int> >&pairs);
        void mergeResult(std::vector<std::vector<int> >&leftValue, std::vector<std::vector<int> > &rightValue, std::vector<std::vector<int> >&result);
        void insertJakobSort(std::vector<int> &V, size_t n, const std::vector<std::vector<int> > &pairs);
        void generateJacobsthalSequence(std::vector<size_t> &vec);
        void binarySearch(std::vector<int> &S, int number);

        // DEQUE METHODS

        void makePairs(const std::deque<int> &nbrs, std::deque<std::deque <int> > &pairs);
        void mergeSort(std::deque<std::deque<int> >&pairs);
        void mergeResult(std::deque<std::deque<int> > &leftValue, std::deque<std::deque<int> > &rightValue, std::deque<std::deque<int> > &result);
        void insertJakobSort(std::deque<int> &V, size_t n, const std::deque<std::deque<int> > &pairs);
        void generateJacobsthalSequence(std::deque<size_t> &vec);
        void binarySearch(std::deque<int> &S, int number);






};

