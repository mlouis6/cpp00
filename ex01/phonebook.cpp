/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:24:17 by mlouis            #+#    #+#             */
/*   Updated: 2025/11/07 14:16:10 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
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

void	displayFullContact(Contact contact)
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
		std::cout << i << "|";
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
	std::stringstream tmp;
	std::getline(std::cin, line);
	tmp.str(line);
	tmp >> index;
	if (!tmp || index >= nb_contacts)
		return ;
	displayFullContact(contacts[index]);
}
