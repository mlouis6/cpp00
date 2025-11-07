/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:51:24 by mlouis            #+#    #+#             */
/*   Updated: 2025/11/07 14:12:37 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	public:
		Contact(void);
		Contact(std::string fn, std::string ln, std::string nick, std::string p, std::string s);
		~Contact(void);
		std::string	getFirstname(void);
		std::string	getLastname(void);
		std::string	getNickname(void);
		std::string	getPhone(void);
		std::string	getSecret(void);

	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif
