#include "BitcoinExchange.hpp"


bool isLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isDateValid(const std::string& date) 
{
    int year, month, day;
    char dash1, dash2;

    std::istringstream ss(date);
    ss >> year >> dash1 >> month >> dash2 >> day;



    // Checks the basic format and separators
    if (ss.fail() || dash1 != '-' || dash2 != '-' || !ss.eof()) 
    {
        return false;
    }

    
    if ((isdigit(year) != 0)|| (isdigit(month) != 0) || (isdigit(day) != 0))
    {
        return false;
    }

    // Checks if the month is within the valid range
    if (month < 1 || month > 12) 
    {
        return false;
    }

    // Checks if the day is within the valid range for the month
    int daysInMonth[] = { 31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (day < 1 || day > daysInMonth[month - 1]) 
    {
        return false;
    }

    return true;
}

bool containsOnlyDigits(const char *str) 
{
    // std::cout << "Entrada em contains only digist: " << str << std::endl;
    int pointflag = 0;
    int i = 1;
    while (str[i]) 
    {
        if (str[i] == '.')
            pointflag++;
        if (pointflag > 1)
            return false;
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '-' || str[i] == '.')
            i++;
        //std::cout << "Char: " << str[i] << std::endl;
        if (!isdigit(str[i]))
        {
            // std::cout << "Retornou falso" << std::endl;
            return false;
        }
        i++;
    }
    // std::cout << "Retornou verdadeiro" << std::endl;
    return true;
}


BitcoinExchange::BitcoinExchange()
{

    
std::ifstream ficheiroTXT("input.txt");
    if (ficheiroTXT.is_open()) 
    {
        std::string linhaTXT;
        while (getline(ficheiroTXT, linhaTXT)) 
        {
            std::stringstream ss(linhaTXT);
            std::string data, valor;
            // const char * verifyvalue;

            if (getline(ss, data, '|'))
            {
                data.erase(data.find_last_not_of(" \n\r\t") + 1);
                if (getline(ss, valor)) 
                {
                    // std::cout << "Valor: " << valor << std::endl;
                    //verifyvalue = valor.c_str();
                    if (data == "date")
                    {
                        continue;
                    }
                    
                    // if (((atoi(verifyvalue) == 0 && isDateValid(data))))/*|| !containsOnlyDigits(verifyvalue))*/
                    // {
                    //     //std::cout << "Tem que dar erro" << std::endl;
                    //     std::cout << "Error: bad input => " << data << std::endl;
                    //     continue;

                    // }
                    
                    // if (!containsOnlyDigits(verifyvalue))
                    // {
                    //     std::cout << "Error: bad input => " << data << std::endl;
                    //     continue;
                    // }

                    else if (!isDateValid(data)) 
                    {
                        dadosTXT.push_back(std::make_pair(data, "invalid_value"));
                    } 
                    else 
                    {
                        dadosTXT.push_back(std::make_pair(data, valor));
                    }
                } 
                else 
                {
                    dadosTXT.push_back(std::make_pair(data, "0"));
                }
            }

        }
        ficheiroTXT.close();
    } 
    else 
    {
        std::cerr << "Não foi possível abrir o ficheiro .txt." << std::endl;
    }

    std::ifstream ficheiroCSV("data.csv");
    if (ficheiroCSV.is_open()) 
    {
        std::string linhaCSV;
        while (getline(ficheiroCSV, linhaCSV)) 
        {
            std::stringstream ss(linhaCSV);
            std::string data, valor;

            if (getline(ss, data, ',') && getline(ss, valor)) 
            {
                data.erase(data.find_last_not_of(" \n\r\t") + 1);
                valor.erase(valor.find_last_not_of(" \n\r\t") + 1);
                // if (!isDateValid(data)) 
                // {
                //     continue; 
                // }
                dadosCSV.push_back(std::make_pair(data, valor));
            }
        }
        ficheiroCSV.close();
    } 
    else 
    {
        std::cerr << "Não foi possível abrir o ficheiro .csv." << std::endl;
    }
}

double stringToDouble(const std::string& str)
{
    std::stringstream ss(str);
    double result;
    ss >> result;
    return result;
}


void BitcoinExchange::searchAndExchange()
{
        // To skip the first line
        // bool firstLine = true;

    for (std::list<std::pair<std::string, std::string> >::const_iterator itTXT = dadosTXT.begin(); itTXT != dadosTXT.end(); ++itTXT) 
    {


        
        // To skip the first line
        // if (firstLine) 
        // {
        //     firstLine = false;
        //     continue;
        // }
        
        
        const std::string& dataTXT = itTXT->first;
        const std::string& valorTXT = itTXT->second;
        const char * verifyvalue;
        verifyvalue = valorTXT.c_str();
        //std::cout << "DataTXT: " << dataTXT << std::endl;

        if (dataTXT == "date") 
        {
            // std::cout << "Devia ser ignorado" << std::endl;
            continue; // Ignora a linha com "date"
        }

        if (((atoi(verifyvalue) == 0 && isDateValid(dataTXT))))/*|| !containsOnlyDigits(verifyvalue))*/
        {
            //std::cout << "Tem que dar erro" << std::endl;
            std::cout << "Error: bad input => " << dataTXT << std::endl;
            continue;

        }

        if (!containsOnlyDigits(verifyvalue))
        {
            std::cout << "Error: bad input => " << dataTXT << std::endl;
            continue;
        }

        if (valorTXT == "invalid_value" || !isDateValid(dataTXT)) 
        {
            std::cout << "Error: bad input => " << dataTXT << std::endl;
            continue;
        }


        int value = atoi(valorTXT.c_str());
        if ((value >= INT_MAX) || (value <= INT_MIN)) 
        {
            std::cout << "Error: too large a number" << std::endl;
            continue;
        }

        // Finds the closest date in the CSV
        std::string lastValidValue;
        bool found = false;

        for (std::list<std::pair<std::string, std::string> >::const_iterator itCSV = dadosCSV.begin(); itCSV != dadosCSV.end(); ++itCSV) 
        {
            if (itCSV->first <= dataTXT) 
            {
                lastValidValue = itCSV->second;
                found = true;
            }
        }

        if (found) 
        {
            double valueTXT = stringToDouble(valorTXT);
            double valueCSV = stringToDouble(lastValidValue);
            double result = valueTXT * valueCSV;

            if (result < 0) 
            {
                std::cerr << "Error: not a positive number." << std::endl;
            } 
            else 
            {
                std::cout << dataTXT << " =>" << valorTXT << " = " << result << std::endl;
            }
        } 
        else 
        {
            std::cout << "The date " << dataTXT << " was not found, nor is there a previous date in the CSV." << std::endl;
        }
    }
}




BitcoinExchange::~BitcoinExchange()
{
    // std::cout << "Default destructor called" << std::endl;

}

BitcoinExchange::BitcoinExchange (BitcoinExchange const &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &source)
{
    if (this != &source)
    {
         //copy definition
        // clean existing data
        this->dadosTXT.clear();
        this->dadosCSV.clear();

        // Copia os dados da origem (source) para o objeto atual // copie data from source do the object
        this->dadosTXT = source.dadosTXT;
        this->dadosCSV = source.dadosCSV;
    }
        return *this;
}

std::ostream& operator<<(std::ostream& o, BitcoinExchange& value)
{
    (void) value;
    return o;
}