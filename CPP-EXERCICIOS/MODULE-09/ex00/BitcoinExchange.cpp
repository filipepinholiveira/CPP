#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
    // std::cout << "Default constructor called" << std::endl;
    std::ifstream ficheiroTXT("imput.txt");
        if (ficheiroTXT.is_open()) 
        {
            std::string linhaTXT;
            while (getline(ficheiroTXT, linhaTXT)) 
            {
                std::stringstream ss(linhaTXT);
                std::string data, valor;

                // Supondo que o .txt tem formato "date | value"
                if (getline(ss, data, '|') && getline(ss, valor)) 
                {
                    data.erase(data.find_last_not_of(" \n\r\t") + 1);
                    valor.erase(valor.find_last_not_of(" \n\r\t") + 1);
                    dadosTXT.insert(std::make_pair(data, valor));  // Preenche o map com data e valor
                    // std::cout << "A criar array com data: " << data << " e com value: " << valor << std::endl;
                }
            }
            ficheiroTXT.close();
        } 
        else 
        {
            std::cerr << "Não foi possível abrir o ficheiro .txt." << std::endl;
        }

        // Lê e preenche os dados do ficheiro .csv
        std::ifstream ficheiroCSV("data.csv");
        if (ficheiroCSV.is_open()) {
            std::string linhaCSV;
            while (getline(ficheiroCSV, linhaCSV)) 
            {
                std::stringstream ss(linhaCSV);
                std::string data, valor;

                // Supondo que o CSV tem formato "date,value"
                if (getline(ss, data, ',') && getline(ss, valor, ',')) 
                {
                    dadosCSV.insert(std::make_pair(data, valor)); // Preenche o map com data e valor
                    // std::cout << "A criar array com data: " << data << " e com value: " << valor << std::endl;
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
    for (std::map<std::string, std::string>::const_iterator itTXT = dadosTXT.begin(); itTXT != dadosTXT.end(); ++itTXT) 
    {
        std::map<std::string, std::string>::const_iterator itCSV = dadosCSV.lower_bound(itTXT->first);

        if (itCSV != dadosCSV.end() && itCSV->first == itTXT->first)
        {
            double valueTXT = stringToDouble(itTXT->second);
            double valueCSV = stringToDouble(itCSV->second);
            double result = valueTXT * valueCSV;
            if (result < 0)
            {
                std::cerr << "Error:  not a positive number." << std::endl;
            }
            else
                std::cout << itTXT->first << " => " << itTXT->second << " * " << itCSV->second << " = " << result << std::endl;
        }
        else 
        {
            if (itCSV != dadosCSV.begin()) 
            {
                --itCSV;
                double valueTXT = stringToDouble(itTXT->second);
                double valueCSV = stringToDouble(itCSV->second);
                double result = valueTXT * valueCSV;

                std::cout << itTXT->first << " => " << itTXT->second << " * " << itCSV->second << " = " << result << std::endl;
            }
            else 
            {
                std::cout << "A data " << itTXT->first << " não foi encontrada nem há uma data anterior no CSV." << std::endl;
            }
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