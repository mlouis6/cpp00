/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:59 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/06 18:14:53 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

static int _nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;
// static int	_amount = 0;
// static int	_nbDeposits = 0;
// static int	_nbWithdrawals = 0;

static int	getNbAccounts(void)
{
	return (_nbAccounts);
}

static int	getTotalAmount(void)
{
	return (_totalAmount);
}

static int	getNbDeposits(void)
{
	return (_totalNbDeposits);
}

static int	getNbWithdrawals(void)
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

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	++_nbAccounts;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "account created\n";
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
	_totalAmount += deposit;
	_totalNbDeposits++;
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

#include <ctime>
static void	_displayTimestamp(void)
{
	std::time_t result = std::time(NULL);
	std::cout << "[" << result << "] ";
}
void	displayStatus(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << "\n";
}
