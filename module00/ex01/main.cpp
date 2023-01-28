/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:33:31 by areheman          #+#    #+#             */
/*   Updated: 2022/10/26 17:01:21 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook   pb;
    std::string str;

    while(1)
    {
        std::cout<<"please enter one of this commands(ADD, SEARCH,EXIT)"<<std::endl;
        std::getline(std::cin, str);
        if (!str.compare("ADD"))
            pb.addContact();
        if (!str.compare("SEARCH"))
            pb.searchContacts();
        if (!str.compare("EXIT"))
            break ;
    }
    return (0);
}