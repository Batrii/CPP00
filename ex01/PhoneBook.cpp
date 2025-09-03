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
}