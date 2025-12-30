/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/30 12:01:27 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

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
