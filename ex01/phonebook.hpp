/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:19:35 by mlouis            #+#    #+#             */
/*   Updated: 2025/11/07 14:17:35 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		void	addContact(void);
		void	displayInfo(std::string info, bool last);
		int		listContacts(void);
		void	searchContacts(void);
	
	private:
		Contact	contacts[8];
		int		index;
};

#endif
