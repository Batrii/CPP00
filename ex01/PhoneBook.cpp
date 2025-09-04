/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:39:04 by bnafiai           #+#    #+#             */
/*   Updated: 2025/09/03 15:39:04 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

void PhoneBook::add_contact()
{
    if (this->index < 8)
        this->index++;
    std::cout << "Adding contact at index " << this->index - 1 << std::endl;

    std::string input;
    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    this->contacts[this->index - 1].set_first_name(input);
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    this->contacts[this->index - 1].set_last_name(input);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    this->contacts[this->index - 1].set_nickname(input);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    this->contacts[this->index - 1].set_phone_number(input);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    this->contacts[this->index - 1].set_darkest_secret(input);

    if (this->total_contacts < 8)
        this->total_contacts++;
    if (this->index == 8)
        this->index = 0;
}
void PhoneBook::search_contact(int num)
{
    if (num < 0 || num >= this->index)
    {
        std::cout << "Invalid index. Please try again." << std::endl;
        return;
    }
    std::cout << "Contact at index " << num << " | ";
    if (this->contacts[num].get_first_name().length() > 10)
        std::cout << "First Name: " << this->contacts[num].get_first_name().substr(0, 9) + ". | ";
    else    
        std::cout << "First Name: " << this->contacts[num].get_first_name() << " | ";

    if (this->contacts[num].get_last_name().length() > 10)
        std::cout << "Last Name: " << this->contacts[num].get_last_name().substr(0, 9) + ". | ";
    else    
        std::cout << "Last Name: " << this->contacts[num].get_last_name() << " | ";
    
    if (this->contacts[num].get_nickname().length() > 10)
        std::cout << "Nickname: " << this->contacts[num].get_nickname().substr(0, 9) + "." << std::endl;
    else
        std::cout << "Nickname: " << this->contacts[num].get_nickname() << std::endl;
}

void PhoneBook::exit_phonebook()
{
    std::cout << "Exiting phonebook. Goodbye!" << std::endl;
}