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
        // Clears the current stack
        std::stack<int> empty;  // ou o tipo apropriado do stack
        std::swap(this->_stack, empty);

        
        // Now copy the content from 'source' to the stack
        this->_stack = source._stack;
    }
    return *this;
}

void RPN::executeOperation(std::string info)
{

    int valueTop;
    int newValueTop;
    int result;

    std::string infoRead;

    // Creates a stream from the string 'info'
    std::istringstream iss(info);

    // Use std::getline to read from the stream based on the string 'info'
    while (std::getline(iss, infoRead, '\0'))
    {
        // Lógic to process 'infoRead'
        for (size_t i = 0; i < infoRead.size(); i++)
        {   
            if (infoRead[i] != '*' && infoRead[i] != '+' && infoRead[i] != ' ' && infoRead[i] != '/' && infoRead[i] != '-')
            {
                _stack.push(infoRead[i] - 48);
            }
            else
            {
                if (infoRead[i] == '*')
                {
                        valueTop = _stack.top();
                        _stack.pop();
                        newValueTop = _stack.top();
                        _stack.pop();
                        result = newValueTop *  valueTop;
                        _stack.push(result);
                }
                else if (infoRead[i] == '/')
                {
                    valueTop = _stack.top();
                    _stack.pop();
                    newValueTop = _stack.top();
                    _stack.pop();
                    if (valueTop == 0)
                        throw NotValidInput();
                    result = newValueTop / valueTop;
                    _stack.push(result);
                }
                else if (infoRead[i] == '+')
                {
                    valueTop = _stack.top();
                    _stack.pop();
                    newValueTop = _stack.top();
                    _stack.pop();
                    result = valueTop + newValueTop;
                    _stack.push(result);
                }
                else if (infoRead[i] == '-')
                {
                    valueTop = _stack.top();
                    _stack.pop();
                    newValueTop = _stack.top();
                    _stack.pop();
                    result = newValueTop - valueTop;
                    _stack.push(result);
                }
                
            }
        }
        
        std::cout << _stack.top() << std::endl;
    }
}

const char* RPN::NotValidInput::what() const throw()
{
        return "Error";
}


std::ostream& operator<<(std::ostream& o, RPN& value)
{
    (void) value;
    return o;
}
