/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/01 15:31:56 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"



int	main(int argc, char *argv[])
{
	Phonebook	pb;
	(void) argc; (void) argv;

	while (!std::cin.eof())
	{
		std::string	opt;

		std::cout << "What do you want to do? [ADD|SEARCH|EXIT]\n";

		std::getline(std::cin, opt);
		if (std::cin.eof())
		{
			std::cout << "End of file detected" << std::endl;
			break ;
		}
		if(opt.compare("ADD") == 0)
			pb.addContact();
		else if(opt.compare("SEARCH") == 0)
			pb.searchContacts();
		else if(opt.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
