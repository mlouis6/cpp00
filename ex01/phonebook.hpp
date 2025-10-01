/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:19:35 by mlouis            #+#    #+#             */
/*   Updated: 2025/10/01 13:51:50 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class Phonebook
{
	public:
		Contact contacts[8]; //TODO: contact constructor set all to 0
		Phonebook(void);
		~Phonebook(void);
		Contact addContact(void);
		void displayInfo(std::string info, bool last);
		void searchContacts(void);
		int index;
};

#endif
