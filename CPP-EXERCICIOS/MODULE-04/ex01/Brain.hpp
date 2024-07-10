
#pragma once
#include <iostream>
#include <string>
#include <string>


class Brain
{
protected:
    std::string ideas [100];

public:

// ********************************* CANONICAL FORM INIT *********************************
// default constructor
    Brain();

// operator =
Brain &operator=(Brain const &source);

// copy constructor
Brain (Brain const &copy);

// destructor
    ~Brain();

// ********************************* CANONICAL FORM INIT *********************************



// ********************************* OTHER FORM INIT *********************************

// getters

std::string get_ideas(int i) const;

// setters

void    set_ideas(int max, const char **array);


// methods


// ********************************* OTHER FORM INIT *********************************




};


