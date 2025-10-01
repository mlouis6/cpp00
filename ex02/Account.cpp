/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:59 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/01 18:16:15 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

static int _nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;
static int	_amount = 0;
static int	_nbDeposits = 0;
static int	_nbWithdrawals = 0;

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

static void	displayAccountsInfos(void)
{
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "amount:" << _nbWithdrawals << "\n";
}

// Account::Account(void)
// {
// 	this->_amount = 0;
// }

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
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->checkAmount() < withdrawal)
		return (false);
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	return (true);
}

int		checkAmount(void)
{
	return (_amount);
}

void	displayStatus(void)
{
	;
}

static void	_displayTimestamp(void)
{
	;
}
