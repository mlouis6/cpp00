/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:24:17 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/06 17:29:33 by mlouis           ###   ########.fr       */
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

std::string	getInfo(std::string prompt)
{
	std::string	info;

	std::cout << prompt;
	std::getline(std::cin, info);
	if (std::cin.eof())
		return ("");
	return (info);
}

void	Phonebook::addContact(void)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
	
	firstname = getInfo("First name: ");
	if (firstname.empty())
		return ;
	lastname = getInfo("Last name: ");
	if (lastname.empty())
		return ;
	nickname = getInfo("Nickname: ");
	if (nickname.empty())
		return ;
	phone = getInfo("Phone: ");
	if (phone.empty())
		return ;
	secret = getInfo("Darkest secret: ");
	if (secret.empty())
		return ;
	Contact c1(firstname, lastname, nickname, phone, secret);
	this->contacts[this->index] = c1;
	++this->index;
	if (this->index == 8)
		this->index = 0;
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

void	displayFullContact(Contact contact)
{
	std::cout << contact.firstname + "\n";
	std::cout << contact.lastname + "\n";
	std::cout << contact.nickname + "\n";
	std::cout << contact.phone + "\n";
	std::cout << contact.secret + "\n";
}
#include <sstream>
void	Phonebook::searchContacts(void)
{
	int	i;

	for (i = 0; i < 8; i++)
	{
		if (this->contacts[i].firstname == "")
			break ;
		std::cout << std::setw(10);
		std::cout << i << "|";
		displayInfo(this->contacts[i].firstname, false);
		displayInfo(this->contacts[i].lastname, false);
		displayInfo(this->contacts[i].nickname, true);
	}

	std::string	line;
	int			index;

	std::stringstream tmp;
	std::getline(std::cin, line);
	tmp.str(line);
	tmp >> index;
	if (!tmp || index >= i)
	{
		std::cout << "That index doesn't exit.\n";
		return ;
	}
	displayFullContact(this->contacts[index]);
	//TODO: refactor
}
