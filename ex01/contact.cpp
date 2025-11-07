/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:26:09 by mlouis            #+#    #+#             */
/*   Updated: 2025/11/07 11:26:16 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nick, std::string p, std::string s)
				: _firstname(fn), _lastname(ln), _nickname(nick), _phone(p), _secret(s)
{
	std::cout << getFirstname() << " was added" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getFirstname(void)
{
	return (_firstname);
}

std::string	Contact::getLastname(void)
{
	return (_lastname);
}

std::string	Contact::getNickname(void)
{
	return (_nickname);
}

std::string	Contact::getPhone(void)
{
	return (_phone);
}

std::string	Contact::getSecret(void)
{
	return (_secret);
}

