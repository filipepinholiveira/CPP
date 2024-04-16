
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{

public:

    int     publicFoo;

    Sample ();
    ~Sample ();


    void    publicBar(void) const;

private:
    
    int     _privateFoo;

    void    _privateBar(void) const;

};

#endif