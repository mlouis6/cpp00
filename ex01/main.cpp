/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/09/29 17:52:42 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

int	main(int argc, char *argv[])
{
	Phonebook	pb;
	// Contact		someone("John", 123456);
	// std::cout << "phone= " << someone.phone << std::endl;
	(void) argc; (void) argv;

	std::string	opt;
	std::cout << "What do you want to do? [ADD|SEARCH|EXIT]\n";
	std::cin >> opt;

	if(opt.compare("ADD") == 0)
	{
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		int			phone;
		std::string	secret;

		std::cout << "First name: ";
		std::cin >> firstname;
		std::cout << "Last name: ";
		std::cin >> lastname;
		std::cout << "Nickname: ";
		std::cin >> nickname;
		std::cout << "Phone: ";
		std::cin >> phone;
		std::cout << "Darkest secret: ";
		std::cin >> secret;
		Contact c1(firstname, lastname, nickname, phone, secret);
		pb.contacts[0] = c1;
		std::cout << "fn= " << pb.contacts[0].firstname << " phone= " << pb.contacts[0].phone << " secret= " << pb.contacts[0].secret << std::endl;
	}
	else if(opt.compare("SEARCH") == 0)
	{
		std::cout << "yay" << std::endl;
	}
	else if(opt.compare("EXIT") == 0)
	{
		std::cout << "yay" << std::endl;
	}
	else
	{
		std::cout << "That option doesnt exist.." << std::endl;
	}
	
	return (0);
}
