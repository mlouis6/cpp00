/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:59 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/06 21:08:30 by mlouis           ###   ########.fr       */
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

#include <ctime>
void	Account::_displayTimestamp(void)
{
	char		buffer[16];
	std::time_t result = std::time(0);
	std::tm		*timePtr = localtime(&result);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timePtr);
	std::cout << "[" << buffer << "] ";
	// TODO: delete below and use above
	// std::cout << "[19920104_091532] "; //! FOR TESTS ONLY
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << "\n";
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
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";created\n";
	return ;
}
Account::~Account(void)
{
	--_nbAccounts;
	_totalAmount -= this->_amount;
	// _totalNbDeposits -= this->_nbDeposits;
	// _totalNbWithdrawals -= this->_nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed\n";
	return ;
}


void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";deposit:" << deposit ;
	this->_nbDeposits++;
	this->_amount += deposit;
	_totalAmount = getTotalAmount() + deposit;
	_totalNbDeposits = getNbDeposits() + 1;
	std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
	if (this->checkAmount() < withdrawal)
	{
		std::cout << "refused\n";
		return (false);
	}
	std::cout << withdrawal ;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
	return (true);
}

