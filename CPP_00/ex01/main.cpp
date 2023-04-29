/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:09:29 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/16 14:53:50 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::get_info(std::string who)
{
	if (who == "darkest secret")
		return this->darkest_secret;
	else if (who =="first name")
		return this->first_name;
	else if (who == "last name")
		return this->last_name;
	else if (who == "phone number")
		return this->phone_number;
	else if (who == "nickname")
		return this->nick_name;
	return (0);
}

void Contact::init_info(std::string data, std::string who)
{
	if (who == "darkest secret")
		this->darkest_secret = data;
	else if (who =="first name")
		this->first_name = data;
	else if (who == "last name")
		this->last_name = data;
	else if (who == "phone number")
		this->phone_number = data;
	else if (who == "nickname")
		this->nick_name = data;
}

int main()
{
	PhoneBook Fun;
	std::string what_do = "begin";

	std::cout << "That's one awesome PhoneBook! What do you want to do?\n";
	std::cout << "Write ADD to add a new contact, SEARCH to display a contact or EXIT to leave your favorite PhoneBook\n";
	while(std::getline(std::cin, what_do))
	{
		if ("ADD" == what_do)
			Fun.add_contact();
		else if ("SEARCH" == what_do)
			Fun.search_contact();
		else if ("EXIT" == what_do)
			return (0);
		else
			std::cout << "Invalid input\n";
		std::cout << "Write ADD to add a new contact, SEARCH to display a contact or EXIT to leave your favorite PhoneBook\n";
	}
	return (0);
}