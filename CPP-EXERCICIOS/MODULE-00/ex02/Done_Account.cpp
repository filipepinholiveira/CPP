
// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                	  //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


// Init all the start-values

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Empty constuctor, when called without input
Account::Account() 
{}

// Constructor with init deposit
// after the creation a note about the created account is printed
Account::Account(int initial_deposit)
{
// Init all the start-values of each account
// and keep track of the number of accounts as well as the total ammount of money
this->_nbDeposits = 0;
this->_nbWithdrawals = 0;
this->_amount = initial_deposit;
Account::_totalAmount += this->_amount;
this->_accountIndex = _nbAccounts;
_nbAccounts++;

// Printing note of the creation of the Account with its starting values and the state created

_displayTimestamp();
std::cout << "index:" << _accountIndex << ";";
std::cout << "amount:" << this->checkAmount() << ";";
std::cout << "created" << std::endl;



}



// destructor that prints all the ending values as well as the state closed
Account::~Account(void)
{
_displayTimestamp();
std::cout << "index:" << _accountIndex << ";";
std::cout << "amount:" << this->checkAmount() << ";";
std::cout << "closed" << std::endl;


}


// getter for the total number of accounts
int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}


// getter for the total amoount of money of all accounts
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

// getter for the total number of deposits
int	Account::getNbDeposits( void ) 
{
    return (Account::_totalNbDeposits);
}

// getter for the total number of withdrawals
int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}


// getter to display all the accounts infos
void	Account::displayAccountsInfos( void )
{

_displayTimestamp();
std::cout << "accounts:" << Account::getNbAccounts() << ";";
std::cout << "total:" << Account::getTotalAmount() << ";";
std::cout << "deposits:" << Account::getNbDeposits() << ";";
std::cout << "withdraws:" << Account::getNbWithdrawals() << ";";
std::cout << std::endl;



}
// falta fazer
// makes a deposit
void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    std::cout << "amount:" << this->checkAmount() << ";";
    _totalNbDeposits++;
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << std::endl;

}

// falta fazer
// makes a withdraw, returns true if successfull, false if not
bool	Account::makeWithdrawal( int withdrawal )
{
	(void) withdrawal;
    _displayTimestamp();

    

	if (this->checkAmount() < withdrawal)
	{
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << this->checkAmount() << ";";
        std::cout << "withdraw:refused";
	}
	else
	{
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << this->checkAmount() << ";";
        std::cout << "withdraw:" << withdrawal << ";";
        this->_amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -=withdrawal;
        std::cout << "amount:" << this->checkAmount() << ";";
        _totalNbWithdrawals++;
        std::cout << "nb_withdraws:" << this->_nbWithdrawals << ";";
	}
    std::cout << std::endl;
    return (true);
}

// falta fazer
int		Account::checkAmount( void ) const
{
    return (this->_amount);
}


// displays the whole status of an account
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"deposits:" << this->_nbDeposits << ";" <<
	"withdrawals:" << this->_nbWithdrawals << std::endl;
}

// displays the timestamp in the correct format
void	Account::_displayTimestamp( void )
{
	time_t now = std::time(NULL);
	struct tm timenow = *std::localtime(&now);

	std::cout << "[" << timenow.tm_year + 1900 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mon + 1 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" <<
	std::setfill('0') << std::setw(2) << timenow.tm_hour <<
	std::setfill('0') << std::setw(2) << timenow.tm_min <<
	std::setfill('0') << std::setw(2) << timenow.tm_sec <<
	"] ";
	// insert this line below instead of the above and then run 'make re && ./leak_information >my.log && diff my.log 19920104_091532.log'
	// std::cout << "[19920104_091532] ";
}