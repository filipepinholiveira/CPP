#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    
    try
    {
        Bureaucrat One("Filipe", 10);
        Bureaucrat Two(One);
        Bureaucrat Three;
        Three = One;
        // std::cout << "Nome: " << Two.getName() << std::endl;
        // std::cout << "Nota: " << Two.getGrade() << std::endl;
        std::cout << One << std::endl;
        std::cout << Two << std::endl;
        std::cout << Three << std::endl;
        One.decrementGrade();
        // std::cout << "Nome: " << Two.getName() << std::endl;
        // std::cout << "Nota: " << Two.getGrade() << std::endl;
        std::cout << One << std::endl;
        std::cout << Two << std::endl;
        std::cout << Three << std::endl;
        Two.incrementGrade();
        // std::cout << "Nome: " << Two.getName() << std::endl;
        // std::cout << "Nota: " << Two.getGrade() << std::endl;
        std::cout << One << std::endl;
        std::cout << Two << std::endl;
        for (int i = 0; Three.getGrade() != 0; i++)
        {
            Three.incrementGrade();
            std::cout << Three << std::endl;
        }
    }
    catch (const Bureaucrat::GradeTooHighException& error)
	{
		std::cout  << error.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& error)
	{
		std::cout  << error.what() << std::endl;
	}


    return 0;
}


// int main(void)
// {
// 	try
// 	{
// 		Bureaucrat obj("Ivo", 11);
// 		obj.decrementGrade();
// 		std::cout << obj << std::endl;
// 		obj.incrementGrade();
// 		obj.decrementGrade();
// 		//std::cout << obj << std::endl;

// 		Bureaucrat obj2(obj);
// 		Bureaucrat obj3;
// 		obj3 = obj2;
// 		// std::cout << obj2 << std::endl;
// 		// std::cout << obj3 << std::endl;
// 	}
// 	catch (const Bureaucrat::GradeTooHighException& error)
// 	{
// 		std::cout  << error.what() << std::endl;
// 	}
// 	catch (const Bureaucrat::GradeTooLowException& error)
// 	{
// 		std::cout  << error.what() << std::endl;
// 	}
	
// 	try
// 	{
// 		Bureaucrat obj("ivo", 151);
// 	}
// 	catch (const Bureaucrat::GradeTooHighException& error)
// 	{
// 		std::cout  << error.what() << std::endl;
// 	}
// 	catch (const Bureaucrat::GradeTooLowException& error)
// 	{
// 		std::cout  << error.what() << std::endl;
// 	}

// 	try
// 	{
// 		Bureaucrat obj("ivo", 0);
// 	}
// 	catch (const Bureaucrat::GradeTooHighException& error)
// 	{
// 		std::cout  << error.what() << std::endl;
// 	}
// 	catch (const Bureaucrat::GradeTooLowException& error)
// 	{
// 		std::cout  << error.what() << std::endl;
// 	}
	
// 	return 0;
// }

