/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 20:21:52 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/10 00:53:12 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) :	_accountIndex(_nbAccounts),
											_amount(initial_deposit),
											_nbDeposits(0),
											_nbWithdrawals(0)
{
	++_nbAccounts;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex ;
	std::cout << ";amount:" << _amount ;
	std::cout <<";created" ;
	std::cout << std::endl;

}

Account::Account( void )
{
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex ;
	std::cout << ";amount:" << _amount ;
	std::cout <<";closed" ;
	std::cout << std::endl;
}





int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts ;
	std::cout << ";total:" << _totalAmount ;
	std::cout << ";deposits:" << _totalNbDeposits ;
	std::cout << ";withdrawals:" << _totalNbWithdrawals	;
	std::cout << std::endl;
}





void Account::makeDeposit(int deposit)
{
	++_nbDeposits;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex ;
	std::cout << ";p_amount:" << _amount ;
	_amount += deposit;
	std::cout << ";deposit:" << deposit ;
	std::cout << ";amount:" << _amount ;
	std::cout << ";nb_deposits:" << _nbDeposits ;
	std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex ;
	std::cout << ";p_amount:" << _amount ;
	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" ;
		std::cout << std::endl;
		return false;
	}
	_amount -= withdrawal;
	++_nbWithdrawals;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal ;
	std::cout << ";amount:" << _amount ;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals ;
	std::cout << std::endl;
	return true;
}

int Account::checkAmount() const
{
	return _amount;
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex ;
	std::cout << ";amount:" << _amount ;
	std::cout << ";deposits:" << _nbDeposits ;
	std::cout << ";withdrawals:" << _nbWithdrawals	;
	std::cout << std::endl;
}





void Account::_displayTimestamp( void )
{
	std::time_t now = std::time(NULL);
	std::tm* tm = std::localtime(&now);

	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tm);

    std::cout << "[" << buffer << "] ";
}
