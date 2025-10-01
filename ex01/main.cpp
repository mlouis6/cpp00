/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/01 13:30:08 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"



int	main(int argc, char *argv[])
{
	Phonebook	pb;
	(void) argc; (void) argv;

	while (1)
	{
		std::string	opt;

		std::cout << "What do you want to do? [ADD|SEARCH|EXIT]\n";
		std::cin >> opt;
		if(opt.compare("ADD") == 0)
		{
			pb.addContact();
		}
		else if(opt.compare("SEARCH") == 0)
		{
			pb.searchContacts();
		}
		else if(opt.compare("EXIT") == 0)
		{
			break ;
		}
		else
		{
			std::cout << "That option [" + opt + "] doesnt exist.." << std::endl;
		}
	}
	
	return (0);
}
