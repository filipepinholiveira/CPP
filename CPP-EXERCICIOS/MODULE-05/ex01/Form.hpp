#pragma once
#include <iostream>

class Form
{
private:
    /* data */
    const std::string   _name;
    bool                _isSign;
    const int           _signGrade;
    const int           _executeGrade;

public:
    Form();
    
    ~Form();
};


