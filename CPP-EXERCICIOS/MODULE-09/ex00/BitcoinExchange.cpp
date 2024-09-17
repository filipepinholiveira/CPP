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
                    dadosTXT[data] = valor; // Preenche o map com data e valor
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
                    dadosCSV[data] = valor; // Preenche o map com data e valor
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

void BitcoinExchange::searchAndExchange()
{
    for (std::map<std::string, std::string>::const_iterator itTXT = dadosTXT.begin(); itTXT != dadosTXT.end(); ++itTXT) 
    {
        bool found = false;
        ComparePair compare(itTXT->first); // Cria uma instância de ComparePair
        for (std::map<std::string, std::string>::const_iterator itCSV = dadosCSV.begin(); itCSV != dadosCSV.end(); ++itCSV) 
        {
            if (compare(*itCSV)) { // Usa o functor ComparePair para comparação
                std::cout << "A data " << itTXT->first << " foi encontrada em dadosCSV com o valor " << itCSV->second 
                          << ". Valor original em dadosTXT: " << itTXT->second << std::endl;
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "A data " << itTXT->first << " não foi encontrada em dadosCSV." << std::endl;
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