
// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#include <iostream>
#include "Account.hpp"

Account::Account()
{
    std::cout << "Account Constructor called" << std::endl;
    return;
}

Account::Account( int initial_deposit )
{
    std::cout << "Account Constructor called" << std::endl;
    this->_amount = initial_deposit;
    return;
}

Account::~Account()
{
    std::cout << "Account Destructor called" << std::endl;
    return;
}

// static int	getNbAccounts( void ) // sendo static nao precisa de ter Account, 'e independente
// {

//     return (0);
// }

// static int	getTotalAmount( void ) // sendo static nao precisa de ter Account, 'e independente
// {
    
//     return (0);
// }

// static int	getNbDeposits( void ) // sendo static nao precisa de ter Account, 'e independente
// {

//     return (0);
// }

// static int	getNbWithdrawals( void ) // sendo static nao precisa de ter Account, 'e independente
// {

//     return (0);
// }

// static void	displayAccountsInfos( void ) // sendo static nao precisa de ter Account, 'e independente
// {
//     std::cout << "displayAccountsInfos entered" << std::endl;
// }

void	Account::makeDeposit( int deposit )
{
    (void) deposit;

}


bool	Account::makeWithdrawal( int withdrawal )
{
    (void) withdrawal;

    return (true);
}


int		Account::checkAmount( void ) const
{
    std::cout << "Tenho este graveto na conta: " << this->_amount << std::endl;
    return (0);
}

void	Account::displayStatus( void ) const
{
    
}

