/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:46:43 by mlouis            #+#    #+#             */
/*   Updated: 2025/09/24 18:54:14 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEATABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		std::string str = argv[i];
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str;
		++i;
	}
	std::cout << std::endl;
	return (0);
}
