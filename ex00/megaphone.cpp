/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:38:26 by bnafiai           #+#    #+#             */
/*   Updated: 2025/09/02 16:38:26 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 1;
        while (i < argc)
        {
            std::string str = argv[i];
            int j = 0;
            while (j < (int)str.length())
            {
                std::cout << (char)toupper(str[j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}