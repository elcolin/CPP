/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:08:34 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/16 16:10:31 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class Contact
{
	public:
		std::string get_info(std::string who);
		void init_info(std::string data, std::string who);
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook
{
	private:
		int contact_num;
		Contact contacts[8];
		int oldest_contact;
	public:
		PhoneBook();
		void add_contact();
		void search_contact();

};

#endif