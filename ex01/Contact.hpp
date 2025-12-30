/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:51:24 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/30 12:00:40 by mlouis           ###   ########.fr       */
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
		std::string	getFirstname(void) const;
		std::string	getLastname(void) const;
		std::string	getNickname(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;

	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif
