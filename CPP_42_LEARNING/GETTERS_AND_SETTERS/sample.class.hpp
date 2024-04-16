
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{

public:


    Sample ();
    ~Sample ();

    void    getFoo(void) const;
    void    setFoo(int v);
    void    plusFoo(void);
    void    lessFoo(void);

private:

    int     _foo;

};

#endif