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


// Lê e preenche os dados do ficheiro .txt
    std::ifstream ficheiroTXT("imput.txt");
    if (ficheiroTXT.is_open()) 
    {
        std::string linhaTXT;
        while (getline(ficheiroTXT, linhaTXT)) 
        {
            std::stringstream ss(linhaTXT);
            std::string data, valor;

            if (getline(ss, data, '|')) 
            {
                // Remove espaços em branco ao redor da data
                data.erase(data.find_last_not_of(" \n\r\t") + 1);

                // Tenta ler o valor, se falhar, define um valor padrão
                if (getline(ss, valor)) 
                {
                    valor.erase(valor.find_last_not_of(" \n\r\t") + 1);
                }
                else
                {
                    valor = "0";
                }

                // Verifica a validade da data antes de inserir
                if (!isDateValid(data))
                {
                    std::cout << "Invalid date: " << data << std::endl;
                    dadosTXT.insert(std::make_pair(data, data));  // Preenche o map com data e valor

                    continue; // Ignora datas inválidas
                }
                else
                // Insere os dados no map
                    dadosTXT.insert(std::make_pair(data, valor));  // Preenche o map com data e valor
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
    if (ficheiroCSV.is_open()) 
    {
        std::string linhaCSV;
        while (getline(ficheiroCSV, linhaCSV)) 
        {
            std::stringstream ss(linhaCSV);
            std::string data, valor;

            // Supondo que o CSV tem formato "date,value"
            if (getline(ss, data, ',') && getline(ss, valor)) 
            {
                // Remove espaços em branco ao redor dos dados e valores
                data.erase(data.find_last_not_of(" \n\r\t") + 1);
                valor.erase(valor.find_last_not_of(" \n\r\t") + 1);

                // Verifica a validade da data antes de inserir
                if (!isDateValid(data))
                {
                    std::cout << "Invalid date in CSV: " << data << std::endl;
                    continue; // Ignora datas inválidas
                }

                // Insere os dados no map
                dadosCSV.insert(std::make_pair(data, valor)); // Preenche o map com data e valor
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

    {
    for (std::map<std::string, std::string>::const_iterator itTXT = dadosTXT.begin(); itTXT != dadosTXT.end(); ++itTXT) 
    {
        std::map<std::string, std::string>::const_iterator itCSV = dadosCSV.lower_bound(itTXT->first);

        // Exibe a data atual de itTXT
        std::cout << "itFirst: " << itTXT->first << std::endl;

        // Verifica se a data é válida
        if (!isDateValid(itTXT->first))
        {
            std::cout << "Error: bad input => " << itTXT->first << std::endl;
            continue; // Ignora esta iteração e passa para a próxima data
        }

        if (itCSV != dadosCSV.end() && itCSV->first == itTXT->first)
        {
            // Data exata encontrada
            double valueTXT = stringToDouble(itTXT->second);
            double valueCSV = stringToDouble(itCSV->second);
            double result = valueTXT * valueCSV;

            if (result < 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
            }
            else
            {
                std::cout << itTXT->first << " => " << itTXT->second << " * " << itCSV->second << " = " << result << std::endl;
            }
        }
        else 
        {
            // Data exata não encontrada, tentar encontrar a data anterior
            if (itCSV != dadosCSV.begin()) 
            {
                --itCSV; // Retrocede para a data anterior mais próxima
                double valueTXT = stringToDouble(itTXT->second);
                double valueCSV = stringToDouble(itCSV->second);
                double result = valueTXT * valueCSV;

                if (result < 0)
                {
                    std::cerr << "Error: not a positive number." << std::endl;
                }
                else
                {
                    std::cout << itTXT->first << " => " << itTXT->second << " * " << itCSV->second << " = " << result << std::endl;
                }
            }
            else 
            {
                std::cout << "A data " << itTXT->first << " não foi encontrada nem há uma data anterior no CSV." << std::endl;
            }
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