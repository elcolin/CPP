/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:57:20 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/16 17:01:37 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_to_format(Contact c, int index)
{
	std::string field[5] = {"first name", "last name", "phone number", "nickname", "darkest secret"};
	std::cout << "         " << index << "|";
	for(int i = 0; i < 4; i++)
	{
		if (c.get_info(field[i]).size() > 10 && field[i] != "phone number")
		{
			for (int j = 0; j < 9; j++)
				std::cout << c.get_info(field[i])[j];
			std::cout << ".";
		}
		else if (field[i] != "phone number")
		{
			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << c.get_info(field[i]);
		}
		if (i < 3 && field[i] != "phone number")
				std::cout << "|";
	}
}


void PhoneBook::search_contact()
{
	std::string field[5] = {"first name", "last name", "phone number", "nickname", "darkest secret"};
	std::string index;
	std::cout << "\n     index|first name| last name|  nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
	
	for (int j = 0; j < contact_num; j++)
	{
		print_to_format(this->contacts[j], j + 1);
		std::cout << "\n";
	}
	std::cout << "\nSelect the wanted contact: " << std::endl;
	std::getline(std::cin, index);
	if (index < "1" || index > "8" || index[1] != '\0' || ((index[0] - 48) > contact_num))
	{
		std::cout << "Invalid index\n";
		return;
	}
	std::cout << "\n";
	for (int i = 0; i < 5; i++)
		std::cout << field[i] << ": " <<  this->contacts[(index[0] - 48) - 1].get_info(field[i]) << "\n";
	std::cout << std::endl;
}

void PhoneBook::add_contact()
{
	std::string data;
	std::string field[5] = {"first name", "last name", "phone number", "nickname", "darkest secret"};
	int num = 0;
	if (contact_num < 8)
		num = contact_num;
	else
	{
		num = oldest_contact;
		if (oldest_contact == 7)
			oldest_contact = 0;
		else
			oldest_contact++;
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter the " << field[i] << " of the contact:\n";
		std::getline(std::cin, data);
		if (data != "\0")
			this->contacts[num].init_info(data, field[i]);
		else i--;
	}
	if (contact_num < 8)
		this->contact_num++;
}

PhoneBook::PhoneBook()
{
	this->contact_num = 0;
	this->oldest_contact = 0;
}