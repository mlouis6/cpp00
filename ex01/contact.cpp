/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:26:09 by mlouis            #+#    #+#             */
/*   Updated: 2025/09/25 17:24:20 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string n, int p) : name(n), phone(p)
{
	std::cout << "hello " << this->name << std::endl;
	return ;
}

Contact::~Contact(void)
{
	return ;
}
