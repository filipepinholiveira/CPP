
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{

public:

    Sample ();
    ~Sample ();

    static int  getInstNbr(void);

private:

    static int  _noMember;

};

#endif

// class Sample
// {

// public:

//     Sample ();
//     ~Sample ();


// };

// #endif