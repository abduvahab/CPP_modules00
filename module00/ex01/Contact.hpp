/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:54:47 by areheman          #+#    #+#             */
/*   Updated: 2022/10/26 16:51:21 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact{
	
	private:
		std::string    f_name;
		std::string    l_name;
		std::string    n_name;
		std::string    p_num;
		std::string    d_secret;
	public:
		void	setFname(std::string s);
		void	setLname(std::string s);
		void	setNname(std::string s);
		void	setP_num(std::string s);
		void	setD_secret(std::string s);
		std::string	getFname();
		std::string	getLname();
		std::string	getNname();
		std::string	getP_num();
		std::string	getD_secret();
};

class	PhoneBook{
	
	private:
		Contact	con[8];
		int		n;
	public:
				PhoneBook();
		void	displayContact();
		void	get_contacs(Contact *c);	
		void	addContact();
		void	searchContacts();
				~PhoneBook();
};