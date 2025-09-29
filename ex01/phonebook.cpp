/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:24:17 by mlouis            #+#    #+#             */
/*   Updated: 2025/09/29 17:05:53 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	for (int i = 0; i < 8; i++)
	{
		this->contacts[i].name = "";
		this->contacts[i].phone = 0;
	}
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Bye" << std::endl;
	return ;
}
