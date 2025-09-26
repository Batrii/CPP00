/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:45:39 by bnafiai           #+#    #+#             */
/*   Updated: 2025/09/02 17:45:39 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
        int     index;
        int     total_contacts;
    public:
        PhoneBook() : index(0), total_contacts(0) {};
        void    add_contact();
        void    search_contact();
        void    exit_phonebook();
};





#endif