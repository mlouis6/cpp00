/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:24:17 by mlouis            #+#    #+#             */
/*   Updated: 2025/11/14 13:02:21 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cctype>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	index = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

namespace utils
{
	bool	allPrintable(const std::string& str)
	{
		for (size_t i = 0 ; i < str.length() ; i++)
		{
			if (!std::isprint(str[i]))
				return (false);
		}
		return (true);
	}
}

bool	Phonebook::addLoop(std::string& str, const std::string& prompt)
{
	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (false) ;
		if (str.empty() || !utils::allPrintable(str))
		{
			std::cout << "You need to enter printable characters\n";
			continue ;
		}
		break ;
	}
	return (true);
}

void	Phonebook::addContact(void)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
	
	if (!addLoop(firstname, "First name: "))
		return ;
	if (!addLoop(lastname, "Last name: "))
		return ;
	if (!addLoop(nickname, "Nickname: "))
		return ;
	if (!addLoop(phone, "Phone: "))
		return ;
	if (!addLoop(secret, "Secret: "))
		return ;
	Contact contact(firstname, lastname, nickname, phone, secret);
	contacts[index] = contact;
	++index;
	if (index == 8)
		index = 0;
}

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

void	displayFullContact(const Contact contact)
{
	std::cout << contact.getFirstname() + "\n";
	std::cout << contact.getLastname() + "\n";
	std::cout << contact.getNickname() + "\n";
	std::cout << contact.getPhone() + "\n";
	std::cout << contact.getSecret() + "\n";
}

int	Phonebook::listContacts(void)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].getFirstname().empty())
			break ;
		std::cout << std::setw(10);
		std::cout << i + 1 << "|";
		displayInfo(contacts[i].getFirstname(), false);
		displayInfo(contacts[i].getLastname(), false);
		displayInfo(contacts[i].getNickname(), true);
		++i;
	}
	return (i);
}

void	Phonebook::searchContacts(void)
{
	std::string	line;
	int			index;
	int			nb_contacts;

	nb_contacts = listContacts();
	while (1)
	{
		std::stringstream tmp;
		std::getline(std::cin, line);
		tmp.str(line);
		tmp >> index;
		if (!tmp || !tmp.eof() || tmp.fail() || index == 0 || index > nb_contacts)
		{
			std::cout << "Enter a number from the search list\n";
			continue ;
		}
		break ;
	}
	displayFullContact(contacts[index - 1]);
}
