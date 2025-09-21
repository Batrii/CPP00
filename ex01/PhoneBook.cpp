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
void PhoneBook::search_contact()
{
    if (this->contacts[0].get_first_name().empty())
    {
        std::cout << "No contacts available. Please add a contact first." << std::endl;
        return;
    }
    int i = 0;
    std::cout << "Index | First Name | Last Name  | Nickname  "<< std::endl;
    while (i < this->total_contacts)
    {
        std::cout << "  " << i << "   | ";
        std::string first_name = this->contacts[i].get_first_name();
        if (first_name.length() > 10)
            std::cout << first_name.substr(0, 9) << ". | ";
        else
            std::cout << std::string(10 - first_name.length(), ' ') << first_name << " | ";

        std::string last_name = this->contacts[i].get_last_name();
        if (last_name.length() > 10)
            std::cout << last_name.substr(0, 9) << ". | ";
        else
            std::cout << std::string(10 - last_name.length(), ' ') << last_name << " | ";

        std::string nickname = this->contacts[i].get_nickname();
        if (nickname.length() > 10)
            std::cout << nickname.substr(0, 9) << "." << std::endl;
        else
            std::cout << std::string(10 - nickname.length(), ' ') << nickname << std::endl;
        i++;
    }
    std::cout << "Enter the index of the contact to view details: ";
    std::string input;
    std::getline(std::cin, input);
    int index = std::atoi(input.c_str());
    if (index < 0 || index >= this->total_contacts)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    std::cout << "First Name: " << this->contacts[index].get_first_name() << std::endl;
    std::cout << "Last Name: " << this->contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << this->contacts[index].get_nickname() << std::endl;
    std::cout << "Phone Number: " << this->contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[index].get_darkest_secret() << std::endl;
}

void PhoneBook::exit_phonebook()
{
    std::cout << "Exiting phonebook. Goodbye!" << std::endl;
}