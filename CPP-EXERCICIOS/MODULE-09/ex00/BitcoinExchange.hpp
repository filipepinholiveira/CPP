#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <limits>
#include <limits.h>
#include <sstream>
#include <functional>
#include <algorithm>
#include <string.h>
#include <sstream>  // Para usar stringstream

class BitcoinExchange
{
    private:

        std::list<std::pair<std::string, std::string> > dadosTXT;
        std::list<std::pair<std::string, std::string> > dadosCSV;

    public:
        BitcoinExchange();
        ~BitcoinExchange();

        void searchAndExchange();

        BitcoinExchange (BitcoinExchange const &copy);

        BitcoinExchange &operator=(BitcoinExchange const &source);


    struct ComparePair 
        {
            ComparePair(const std::string& dataTXT) : _dataTXT(dataTXT) {}

            bool operator()(const std::pair<std::string, std::string>& entryCSV) const 
            {
                return entryCSV.first == _dataTXT;
            }

        private:
            std::string _dataTXT;
        };

};

std::ostream& operator<<(std::ostream& o, BitcoinExchange& value);