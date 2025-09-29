/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:51:24 by mlouis            #+#    #+#             */
/*   Updated: 2025/09/29 17:40:12 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		int			phone;
		std::string	secret;

		Contact(void);
		Contact(std::string fn, std::string ln, std::string nick, int p, std::string s);
		~Contact(void);
};

#endif
