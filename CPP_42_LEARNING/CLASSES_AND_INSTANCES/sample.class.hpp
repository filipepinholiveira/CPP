
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{

private:
    int idade;

public:


    Sample(void); // constructor
    ~Sample(void); // destructor

    void    function(std::string name); // declaraçao de uma funcao, neste caso para dar nomes;
    void    ageplus(std::string ano)
    {
        idade++;
        std::cout << "My age is: " << idade << " in " << ano << std::endl;
    }
};

#endif