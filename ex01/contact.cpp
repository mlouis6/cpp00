/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:26:09 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/01 13:26:32 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nick, std::string p, std::string s)
				: firstname(fn), lastname(ln), nickname(nick), phone(p), secret(s)
{
	std::cout << this->firstname << " was added" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	return ;
}
