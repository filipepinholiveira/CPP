
#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>


class sample
{
private:
    
    int _age;

public:

    sample();                       // canonical

    sample(int age_give);

    sample(sample const & src);    // canonical

    ~sample();                      // canonical

    sample &    operator=(sample const & rhs);

    int getter() const;

};


std::ostream &  operator<<(std::ostream & o, sample const & i);

#endif