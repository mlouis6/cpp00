/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/11/14 09:41:02 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

int	main(void)
{
	Phonebook	pb;

	while (!std::cin.eof())
	{
		std::string	opt;

		std::cout << "What do you want to do? [ADD|SEARCH|EXIT]\n";

		std::getline(std::cin, opt);
		if (std::cin.eof())
			break ;
		if(opt == "ADD")
			pb.addContact();
		else if(opt == "SEARCH")
			pb.searchContacts();
		else if(opt == "EXIT")
			break ;
	}
	return (0);
}
