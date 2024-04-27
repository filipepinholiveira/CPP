
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

/*

1 -  Init all the start-values

2 - Create constructor base, construtor init(with prints) and destructor (with prints)

3 - define all the getters:

    - // getter for the total number of accounts
    - // getter for the total amoount of money of all accounts
    - // getter for the total number of deposits
    - // getter for the total number of withdrawals
    - // getter to display all the accounts infos


4 - create make deposit

5 - create make withdraw

6 - create checkamount

7 - create displaystatus

8 - create time display:  #DONE

*/

// inicializaçao de atributos de conta
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// construtor base a ser chamado sem argumentos
Account::Account() 
{

}


// construtor usado na criaçao de conta com deposito inicial e print
Account::Account(int deposit)
{
    Account::_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_amount = deposit;
    Account::_totalAmount += _amount;
    _displayTimestamp();
    std::cout << 
        "index:" << this->_accountIndex << ";"
        << "amount:" << checkAmount() << ";"
        << "created" << std::endl;

}
// destrutor de conta com print
Account::~Account()
{
    _displayTimestamp();
    std::cout <<
    "index:" << this->_accountIndex << ";"
        << "amount:" << checkAmount() << ";"
        << "closed" << std::endl;
}

//getter for the total number of accounts
int	Account::getNbAccounts( void )
{
    return(Account::_nbAccounts);
}

// getter for the total amoount of money of all accounts
int	Account::getTotalAmount( void )
{
    return(Account::_totalAmount);
}

// getter for the total number of deposits
int	Account::getNbDeposits( void )
{
    return(Account::_totalNbDeposits);
}

// getter for the total number of withdrawals
int	Account::getNbWithdrawals( void )
{
    return(Account::_totalNbWithdrawals);
}

// getter to display all the accounts infos
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << 
        "acounts:" << Account::getNbAccounts() << ";" <<
        "total:" << Account::getTotalAmount() << ";" <<
        "deposits:" << Account::getNbDeposits() << ";" <<
        "withdraws:" << Account::getNbWithdrawals () << ";" <<
        std::endl;
}




void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout <<
    "index:" << this->_accountIndex << ";" <<
    "p_amount:" << checkAmount() << ";" <<
    "deposit:" << deposit << ";";
    Account::_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_nbDeposits++;
    Account::_totalNbDeposits +=_nbDeposits;
    std::cout <<
    "amount:" << checkAmount() << ";" <<
    "nb_deposits:" << _nbDeposits <<
    std::endl;

}


bool	Account::makeWithdrawal( int withdrawal )
{

        if (withdrawal > this->_amount)
        {
            _displayTimestamp();
            std::cout <<
            "index:" << this->_accountIndex << ";" <<
            "p_amount:" << checkAmount() << ";" <<
            "withdraw:refused" <<
            std::endl;
            return (false);
        }
        else
        {
            _displayTimestamp();
            std::cout <<
            "index:" << this->_accountIndex << ";" <<
            "p_amount:" << checkAmount() << ";" <<
            "withdrawal:" << withdrawal << ";";
            Account::_amount -= withdrawal;
            Account::_totalAmount -= withdrawal;
            Account::_nbWithdrawals++;
            Account::_totalNbWithdrawals += _nbWithdrawals;
            std::cout <<
            "amount:" << checkAmount() << ";" <<
            "nb_withdrawals:" << _nbWithdrawals <<
            std::endl;
            return (true);
        }
}

// check amount
int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

//create displaystatus
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << 
    "index:" << this->_accountIndex << ";"
    << "amount:" << checkAmount() << ";"
    << "deposits:" << this->_nbDeposits << ";"
    << "withdrawals:" << this->_nbWithdrawals << ";"
    << std::endl;
}


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
}