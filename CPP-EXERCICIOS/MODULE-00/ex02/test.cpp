
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int main (void)
{
    // std::cout << "Entra no main" << std::endl;
    // int abretura_de_conta;
    // std::cout << "Quanto pastel vais depositar na abertura de conta? ";
    // std::cin >> abretura_de_conta;
    // Account Teste(abretura_de_conta);
    // Teste.checkAmount();




	std::cout << "DISPLAY ACCOUNT CREATION" << std::endl;
    typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	std::cout << "DISPLAY INFO" << std::endl;
	Account::displayAccountsInfos();
	std::cout << "DISPLAY STATUS" << std::endl;
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	std::cout << "DISPLAY DEPOSIT" << std::endl;
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {
		
		(*(it.first)).makeDeposit( *(it.second) );
	}
	std::cout << "DISPLAY INFO" << std::endl;
	Account::displayAccountsInfos();
	std::cout << "DISPLAY STATUS" << std::endl;
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	std::cout << "DISPLAY WITHDRAW" << std::endl;
	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}
	std::cout << "DISPLAY INFO" << std::endl;
	Account::displayAccountsInfos();
	std::cout << "DISPLAY STATUS" << std::endl;
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	std::cout << "DISPLAY DESTRUCTION" << std::endl;
	return 0;
}
