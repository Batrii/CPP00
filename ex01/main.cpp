/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <<bnafiai@student.42.fr>>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:10:24 by bnafiai           #+#    #+#             */
/*   Updated: 2025/09/26 15:10:24 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook phonebook;
    std::string input;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, input))
        {
            std::cout << "End of file or something wrong with the input" << std::endl;
            return 1;
        }
        if (input == "ADD")
            phonebook.add_contact();
        else if (input == "SEARCH")
        {
            phonebook.search_contact();
        }
        else if (input == "EXIT")
        {
            phonebook.exit_phonebook();
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}