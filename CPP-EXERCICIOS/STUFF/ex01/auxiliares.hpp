
#ifndef AUXILIARES_H
# define AUXILIARES_H

#include "Contact.hpp"

void    getData(std::string &name, std::string &lastName, std::string &nickName, std::string &phoneNumber, std::string &darkestSecret, int &choice);

void    clearData (std::string &name, std::string &lastName, std::string &nickName, std::string &phoneNumber, std::string &darkestSecret);

void    printHeader();

#endif