/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:59 by mlouis            #+#    #+#             */
/*   Updated: 2025/11/07 14:34:56 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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

void	Account::_displayTimestamp(void)
{
	char		buffer[16];
	std::time_t result = std::time(0);
	std::tm		*timePtr = localtime(&result);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timePtr);
	std::cout << "[" << buffer << "] ";
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

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created\n";
	return ;
}
Account::~Account(void)
{
	--_nbAccounts;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed\n";
	return ;
}


void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";deposit:" << deposit ;
	_nbDeposits++;
	_amount += deposit;
	_totalAmount = getTotalAmount() + deposit;
	_totalNbDeposits = getNbDeposits() + 1;
	std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
	if (checkAmount() < withdrawal)
	{
		std::cout << "refused\n";
		return (false);
	}
	std::cout << withdrawal ;
	_nbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << checkAmount() << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
}

