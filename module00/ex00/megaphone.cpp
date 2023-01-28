/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex2.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:06:54 by areheman          #+#    #+#             */
/*   Updated: 2022/10/18 16:04:56 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int     i;
    
    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
    {
        i = 1;
        while(av[i])
        {
            std::string str(av[i]);
            for(int j=0; str[j] != '\0'; j++)
                std::cout<<(char)std::toupper(str[j]);
            if (!av[i + 1])
                break ;
            std::cout<<" ";
            i++;
        }
        std::cout<<std::endl;
    }
    return (0);
}
