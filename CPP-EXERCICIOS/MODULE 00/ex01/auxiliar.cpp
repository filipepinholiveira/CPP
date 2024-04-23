
#include "Phonebook.hpp"

void    printHeader()
{

std::cout << "*********************************************************" << std::endl;
std::cout << "**    _____     _    _     ____     _   _    ______    **" << std::endl; 
std::cout << "**   |  __ \\   | |  | |   / __ \\   | \\ | |  |  ____|   **" << std::endl; 
std::cout << "**   | |__) |  | |__| |  | |  | |  |  \\| |  | |__      **" << std::endl; 
std::cout << "**   |  ___/   |  __  |  | |  | |  | . ` |  |  __|     **" << std::endl; 
std::cout << "**   | |       | |  | |  | |__| |  | |\\  |  | |____    **" << std::endl; 
std::cout << "**   |_|       |_|  |_|   \\____/   |_| \\_|  |______|   **" << std::endl; 
std::cout << "**                                                     **" << std::endl; 
std::cout << "**                                                     **" << std::endl; 
std::cout << "**         ____      ____      ____     _  __          **" << std::endl; 
std::cout << "**        |  _ \\    / __ \\    / __ \\   | |/ /          **" << std::endl; 
std::cout << "**        | |_) |  | |  | |  | |  | |  | ' /           **" << std::endl; 
std::cout << "**        |  _ <   | |  | |  | |  | |  |  <            **" << std::endl; 
std::cout << "**        | |_) |  | |__| |  | |__| |  | . \\           **" << std::endl; 
std::cout << "**        |____/    \\____/    \\____/   |_|\\_\\          **" << std::endl; 
std::cout << "**                                                     **" << std::endl; 
std::cout << "**                                                     **" << std::endl; 
std::cout << "*********************************************************" << std::endl;
std::cout << "**      ADD ()          SEARCH ()         EXIT ()      **" << std::endl;
std::cout << "*********************************************************" << std::endl;

}

void	sig_handler(int signum)
{
	if (signum == SIGINT)
	{
		std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "THANKS FOR USING MY AGENDA" << std::endl;
        exit(signum);
	}
}