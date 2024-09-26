#include "RPN.hpp"

RPN::RPN()
{
    // std::cout << "Default constructor called" << std::endl;
}

RPN::~RPN()
{
    // std::cout << "Default destructor called" << std::endl;
}

RPN::RPN (RPN const &copy)
{
    *this = copy;
}
RPN &RPN::operator=(RPN const &source)
{
    if (this != &source)
    {
         //copy definition
    }
    return *this;
}

void RPN::executeOperation(std::string info)
{
    int operandFlag = 0;
    // int operatorFlag = 0;
    std::string infoRead;

    // Cria um fluxo a partir da string 'info'
    std::istringstream iss(info);

    // Use std::getline para ler do fluxo baseado na string 'info'
    while (std::getline(iss, infoRead, '\0')) // Aqui você pode alterar o delimitador se necessário
    {
        // Lógica para processar 'infoRead'
        for (size_t i = 0; i < infoRead.size(); i++)
        {   
            if (infoRead[i] != 'x' && infoRead[i] != '+' && infoRead[i] != ' ')
            {
                std::cout << "Caracter: " << infoRead[i] << std::endl;
                _stack.push(infoRead[i] - 48);
                std::cout << "Value in top of stack: " << _stack.top() << std::endl;
                operandFlag++;
            }
        }
        
        std::cout << "Lido: " << infoRead << std::endl;
    }
}

std::ostream& operator<<(std::ostream& o, RPN& value)
{
    (void) value;
    return o;
}
