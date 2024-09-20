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

    // Verifica o formato básico e separadores
    if (ss.fail() || dash1 != '-' || dash2 != '-') 
    {
        return false;
    }

    // Verifica se o mês está no intervalo válido
    if (month < 1 || month > 12) 
    {
        return false;
    }

    // Verifica se o dia está no intervalo válido para o mês
    int daysInMonth[] = { 31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (day < 1 || day > daysInMonth[month - 1]) 
    {
        return false;
    }

    return true;
}

BitcoinExchange::BitcoinExchange()
{
std::ifstream ficheiroTXT("imput.txt");
    if (ficheiroTXT.is_open()) {
        std::string linhaTXT;
        while (getline(ficheiroTXT, linhaTXT)) {
            std::stringstream ss(linhaTXT);
            std::string data, valor;

            if (getline(ss, data, '|')) {
                data.erase(data.find_last_not_of(" \n\r\t") + 1);
                if (getline(ss, valor)) {
                    valor.erase(valor.find_last_not_of(" \n\r\t") + 1);
                    if (!isDateValid(data)) {
                        dadosTXT.push_back(std::make_pair(data, "invalid_value"));
                    } else {
                        dadosTXT.push_back(std::make_pair(data, valor));
                    }
                } else {
                    dadosTXT.push_back(std::make_pair(data, "0"));
                }
            }
        }
        ficheiroTXT.close();
    } else {
        std::cerr << "Não foi possível abrir o ficheiro .txt." << std::endl;
    }

    std::ifstream ficheiroCSV("data.csv");
    if (ficheiroCSV.is_open()) {
        std::string linhaCSV;
        while (getline(ficheiroCSV, linhaCSV)) {
            std::stringstream ss(linhaCSV);
            std::string data, valor;

            if (getline(ss, data, ',') && getline(ss, valor)) {
                data.erase(data.find_last_not_of(" \n\r\t") + 1);
                valor.erase(valor.find_last_not_of(" \n\r\t") + 1);
                if (!isDateValid(data)) {
                    continue; 
                }
                dadosCSV.push_back(std::make_pair(data, valor));
            }
        }
        ficheiroCSV.close();
    } else {
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
        // Para ignorar a primeira linha
        bool firstLine = true;

for (std::list<std::pair<std::string, std::string> >::const_iterator itTXT = dadosTXT.begin(); itTXT != dadosTXT.end(); itTXT++) 
{


        
    // Ignorar a primeira linha
        if (firstLine) 
        {
            firstLine = false;
            continue;
        }
        
        
        const std::string& dataTXT = itTXT->first;
        const std::string& valorTXT = itTXT->second;

        if (valorTXT == "invalid_value" || !isDateValid(dataTXT)) 
        {
            std::cout << "Error: bad input => " << dataTXT << std::endl;
            continue;
        }

        int value = atoi(valorTXT.c_str());
        if ((value >= INT_MAX) || (value <= INT_MIN)) {
            std::cout << "Error: too large a number" << std::endl;
            continue;
        }

        // Encontra a data mais próxima no CSV
        std::string lastValidValue;
        bool found = false;

        for (std::list<std::pair<std::string, std::string> >::const_iterator itCSV = dadosCSV.begin(); itCSV != dadosCSV.end(); ++itCSV) {
            if (itCSV->first <= dataTXT) {
                lastValidValue = itCSV->second;
                found = true;
            }
        }

        if (found) {
            double valueTXT = stringToDouble(valorTXT);
            double valueCSV = stringToDouble(lastValidValue);
            double result = valueTXT * valueCSV;

            if (result < 0) {
                std::cerr << "Error: not a positive number." << std::endl;
            } else {
                std::cout << dataTXT << " => " << valorTXT << " = " << result << std::endl;
            }
        } else {
            std::cout << "A data " << dataTXT << " não foi encontrada nem há uma data anterior no CSV." << std::endl;
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
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, BitcoinExchange& value)
{
    (void) value;
    return o;
}