/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:24:17 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/01 14:11:22 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Bye" << std::endl;
	return ;
}

Contact	Phonebook::addContact(void)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
	
	std::cout << "First name: ";
	std::getline(std::cin, firstname);
	std::cout << "Last name: ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone: ";
	std::getline(std::cin, phone);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, secret);
	Contact c1(firstname, lastname, nickname, phone, secret);
	this->contacts[this->index] = c1;
	++this->index;
	if (this->index == 8)
		this->index = 0;
	return (c1);
}

#include <iomanip>
void	Phonebook::displayInfo(std::string info, bool last)
{
	std::cout << std::setw(10);
	if (info.length() > 10)
	{
		std::string trunc;
		trunc = info.substr(0, 9);
		std::cout << trunc + ".";
	}
	else
		std::cout << info;
	if (last)
		std::cout << std::endl;
	else
		std::cout << "|";
}

void	Phonebook::searchContacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].firstname == "")
			break ;
		std::cout << std::setw(10);
		std::cout << i << "|";
		displayInfo(this->contacts[i].firstname, false);
		displayInfo(this->contacts[i].lastname, false);
		displayInfo(this->contacts[i].nickname, true);
	}
}
