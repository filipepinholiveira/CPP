
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{

public:

    float const pi;
    int         qd;

    Sample (float const f);
    ~Sample ();


    void    bar(void) const;

};

#endif