#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer (Serializer const &copy)
{
    *this = copy;
}
Serializer &Serializer::operator=(Serializer const &source)
{
    if (this != &source)
    {
        //copy definition
    }
    return *this;
}

Serializer::~Serializer()
{
    std::cout << "Default destructor called" << std::endl;
}


uintptr_t Serializer::serialize(Data* ptr)
{
    // reinterpret_cast<novo_tipo>(expressao)
    return reinterpret_cast<uintptr_t>(ptr);
}


Data* Serializer::deserialize(uintptr_t raw)
{
    //// reinterpret_cast<novo_tipo>(expressao)
    return reinterpret_cast<Data*>(raw);
}
