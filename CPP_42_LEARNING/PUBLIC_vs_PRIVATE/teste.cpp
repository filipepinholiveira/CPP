
#include "sample.class.hpp"

int main()
{
    Sample instance;

    instance.publicFoo = 10;
    //instance._privateFoo = 10000; sem acesso à variavel por ser privado
    instance.publicBar();
    //instance._privateBar(); // sem acesso por funçao ser privada

}