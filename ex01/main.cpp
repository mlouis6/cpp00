/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/09/29 17:14:27 by mlouis           ###   ########.fr       */
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
		std::cout << "yay" << std::endl;
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
