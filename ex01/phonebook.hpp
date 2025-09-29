/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:19:35 by mlouis            #+#    #+#             */
/*   Updated: 2025/09/29 16:54:15 by mlouis           ###   ########.fr       */
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
};

#endif
