
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm ("RobotomyRequestForm", 0, 72, 45)
{
    std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
    _target = "No target set";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm ("RobotomyRequestForm", 0, 72, 45)
{
    _target = target;
    std::cout << "*RobotomyRequestForm parameter constructor*" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default RobotomyRequestForm destructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm (RobotomyRequestForm const &copy) :AForm()
{
    *this = copy;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &source)
{
    if (this != &source)
    {
        AForm::operator=(source);
        _target = source._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int valid;

    if(!getIsSigned())
        throw IsNotSigned();
    else if(getSignGrade() < executor.getGrade())
        throw SignGrade();
    else if(getExecuteGrade() < executor.getGrade())
        throw ExecuteGrade();
        

    //srand ((unsigned) time(NULL));
    /*
    A função srand((unsigned) time(NULL)); em C/C++ é usada para inicializar 
    a função de geração de números aleatórios (rand()) com uma semente baseada 
    no tempo atual. Isso permite que a sequência de números aleatórios gerados 
    por rand() seja diferente cada vez que o programa é executado.
    */

    valid = rand() % 2;
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    if(valid)
        std::cout << this->_target << " has been robotomized successfully!!!" << std::endl;
    else
        std::cout << "Robotomy failed." << std::endl;
}
