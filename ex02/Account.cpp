/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:59 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/06 19:02:47 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// static int	_amount = 0;
// static int	_nbDeposits = 0;
// static int	_nbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "amount:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << "\n";
}

#include <ctime>
void	Account::_displayTimestamp(void)
{
	std::time_t result = std::time(NULL);
	std::cout << "[" << result << "] ";
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << "\n";
}

// Account::Account(void)
// {
// 	static int	_nbAccounts = 0;
// 	static int	_totalAmount = 0;
// 	static int	_totalNbDeposits = 0;
// 	static int	_totalNbWithdrawals = 0;
// }

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created\n";
	return ;
}
Account::~Account(void)
{
	--_nbAccounts;
	_totalAmount -= this->_amount;
	// _totalNbDeposits -= this->_nbDeposits;
	// _totalNbWithdrawals -= this->_nbWithdrawals;
	return ;
}


void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	this->_amount += deposit;
	_totalAmount = getTotalAmount() + deposit;
	_totalNbDeposits = getNbDeposits() + 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->checkAmount() < withdrawal)
		return (false);
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

