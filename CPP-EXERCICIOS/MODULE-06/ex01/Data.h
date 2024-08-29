#pragma once
#include <string>
#include <iostream>

struct Data
{
    /* data */
    std::string _nome;
    int _idade;

    Data()
    {
        _nome = "No object";
    }

    Data(std::string Name, int Age) : _nome(Name), _idade(Age)
    {

    }
};


