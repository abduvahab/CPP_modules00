/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:36:47 by areheman          #+#    #+#             */
/*   Updated: 2023/01/28 13:18:38 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

void	Contact::setFname(std::string s)
{
	this->f_name =  s;
}

void	Contact::setLname(std::string s)
{
	this->l_name =  s;
}

void	Contact::setNname(std::string s)
{
	this->n_name = s;
}

void	Contact::setP_num(std::string s)
{
	this->p_num = s;
}
void	Contact::setD_secret(std::string s)
{
	this->d_secret = s;
}
std::string	Contact::getFname()
{
	return f_name;
}
std::string	Contact::getLname()
{
	return l_name;
}
std::string	Contact::getNname()
{
	return n_name;
}
std::string	Contact::getP_num()
{
	return p_num;
}
std::string	Contact::getD_secret()
{
	return d_secret;
}

PhoneBook::PhoneBook()
{
	this->n = 0;
}

void	PhoneBook::get_contacs(Contact *c)
{
	std::string str;
	
	while (!str[0])
	{
		std::cout<<"please enter first name :";
		std::getline(std::cin, str);
		if (str[0])
			c->setFname(str);
		else
			std::cout<<"first name can't be empty!!"<<std::endl;
	}
	str.clear();
	while (!str[0])
	{
		std::cout<<"please enter last name :";
		std::getline(std::cin, str);
		if (str[0])
			c->setLname(str);
		else
			std::cout<<"last name can't be empty!!"<<std::endl;
	}
	str.clear();
	while (!str[0])
	{
		std::cout<<"please enter nick name :";
		std::getline(std::cin, str);
		if (str[0])
			c->setNname(str);
		else
			std::cout<<"nick name can't be empty!!"<<std::endl;
	}
	str.clear();
	while (!str[0])
	{
		std::cout<<"please enter phone number :";
		std::getline(std::cin, str);
		if (str[0])
			c->setP_num(str);
		else
			std::cout<<"phone number can't be empty!!"<<std::endl;
	}
	str.clear();
		while (!str[0])
	{
		std::cout<<"please enter dark secret :";
		std::getline(std::cin, str);
		if (str[0])
			c->setD_secret(str);
		else
			std::cout<<"dark secret can't be empty!!"<<std::endl;
	}
}

void	PhoneBook::addContact()
{
	size_t		l;
	Contact 	*c;
	
	this->n++;
	c = &(con[(this->n - 1) % 8]);
	
	get_contacs(c);
}

void	displayIndex()
{
	std::cout<<"|     index";
	std::cout<<"|first name";
	std::cout<<"| last name";
	std::cout<<"|  nickname|"<< std::endl;
	std::cout<<"|----------";
	std::cout<<"|----------";
	std::cout<<"|----------";
	std::cout<<"|----------|"<< std::endl;
}

void	displayeString(std::string str)
{
	size_t	i;
	size_t	s;
	size_t	l;
	
	l = str.length();
	if (l > 10 )
	{
		i = 0;
		while (i < 9)
			std::cout<<str[i++];
		std::cout<<".";
	}
	else
	{
		s = 10 - l;
		i = 0;
		while (s--)
			std::cout<<" ";
		while (str[i])
			std::cout<<str[i++];
	}		
}

void	PhoneBook::displayContact()
{
	size_t	i;
	size_t	max;
	
	i = 0;
	displayIndex();
	max = 8;
	if (this->n < 8)
		max = this->n;	
	while (i < max)
	{
		std::cout<<"|";
		std::cout<<"         "<<(i  + 1);
		std::cout<<"|";
		displayeString(con[i].getFname());
		std::cout<<"|";
		displayeString(con[i].getLname());
		std::cout<<"|";
		displayeString(con[i].getNname());
		std::cout<<"|"<<std::endl;
		i++;
	}
	std::cout<<"|----------";
	std::cout<<"|----------";
	std::cout<<"|----------";
	std::cout<<"|----------|"<< std::endl;	
}

void	PhoneBook::searchContacts()
{
	size_t		i;
	int			l;
	int			n;
	std::string str;
	
	i = 0;
	if (this->n == 0)
	{
		std::cout<<"ERROR: no contacts in phonebook!"<<std::endl;
		return ;
	}
	displayContact();
	std::cout<<"contact id:";
	std::getline(std::cin, str);
	if (str[0])
	{
		i = 0;
		while(str[i] == ' ')
			i++;
		if (str[i] == '+')
			i++;
		while(str[i] == '0')
			i++;
		if (i == str.length())
			n = -1;
		else if(i < str.length())
			n = (str[i] - 48) - 1;
		l = 7;
		if (this->n < 8)
			l = this->n;
		if (n >= 0 && n < l)
		{
			std::cout<<"first name: "<<con[n].getFname()<<std::endl;
			std::cout<<"last name: "<<con[n].getLname()<<std::endl;
			std::cout<<"nick name: "<<con[n].getNname()<<std::endl;
			std::cout<<"phone number: "<<con[n].getP_num()<<std::endl;
			std::cout<<"dark secret: "<<con[n].getD_secret()<<std::endl;
		}
		else
			std::cout<<"ERROR: contact id is invalid! "<<std::endl;
	}
	else
		std::cout<<"ERROR: contact id is empty! "<<std::endl;
}

PhoneBook::~PhoneBook()
{
}