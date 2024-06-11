#pragma once
#include <iostream>

class square
{
private:
    /* data */
    int _x;
public:

    square(int x);
    void setter(int x);
    int getterX() const;

    virtual void    print(); // desta forma a atribuiçao nao e feita na compilaçao mas sim ao executar
    // usando virtual deixa de ser redifining e passa a ser overriding
    // virtual = dynamic binding = overriding
    // static binding = redifining
    // polymorphismo / dynamic binding -> necessita de passar por referencia ou ponteiro

    ~square();
};

class rectangle : public square
{
private:
    /* data */
    int _y;    

public:
    rectangle(int x, int y);
    void setter(int y);
    int getterY() const;

    void    print();

    ~rectangle();
};

class Foo : public rectangle
{
private:

    /* data */
public:
    Foo(int x, int y);

    void    print();

    ~Foo();
};


void    print_call(square &input);