/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:45:43 by bnafiai           #+#    #+#             */
/*   Updated: 2025/09/03 15:45:43 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>

void	Contact::set_first_name(std::string str)
{
    this->first_name = str;
}
void	Contact::set_last_name(std::string str)
{
    this->last_name = str;
}
void	Contact::set_nickname(std::string str)
{
    this->nickname = str;
}
void	Contact::set_phone_number(std::string str)
{
    this->phone_number = str;
}
void	Contact::set_darkest_secret(std::string str)
{
    this->darkest_secret = str;
}