/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:50:59 by amoubine          #+#    #+#             */
/*   Updated: 2024/12/15 18:59:24 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
// using namespace std;

int main(int ac , char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return 1;
    }
    int i = 1;
    while (i < ac)
    {
        size_t index = 0;
        while (index < strlen(av[i]))
        {
            std::cout << (char)toupper(av[i][index]);
            index++;
        }
        i++;
    }
    return 0;    
}
