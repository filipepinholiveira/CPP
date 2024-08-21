
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm ("ShrubberyCreationForm", 0, 145, 137)
{
    // std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
    _target = "No target set";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 0, 145, 137)
{
    _target = target;
    // std::cout << "*ShrubberyCreationForm parameter constructor*" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "Default ShrubberyCreationForm destructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm (ShrubberyCreationForm const &copy) :AForm()
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &source)
{
    if (this != &source)
    {
        AForm::operator=(source);
        _target = source._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    // falta codigo de execucao ShrubberyCreationForm
    if(!this->getIsSigned())
        throw IsNotSigned();
    else if(getSignGrade() < executor.getGrade())
        throw SignGrade();
    else if(getExecuteGrade() < executor.getGrade())
        throw ExecuteGrade();
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    std::string filename = _target + "_shrubbery";
    std::ofstream outfile(filename.c_str());
    if (!outfile) 
    {
        std::cerr << "Erro ao criar o arquivo " << filename << std::endl;
        return;
    }
    // Escreve árvores ASCII no arquivo
    outfile << "       ###" << std::endl;
    outfile << "      #o###" << std::endl;
    outfile << "    #####o###" << std::endl;
    outfile << "   #o#\\#|#/###" << std::endl;
    outfile << "    ###\\|/#o#" << std::endl;
    outfile << "     # }|{  #" << std::endl;
    outfile << "       }|{" << std::endl;
    
    // Fecha o arquivo
    outfile.close();
    

}
