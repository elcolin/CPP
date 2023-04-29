/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:06 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/02 17:24:10 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructed" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &a)
{
	std::cout << "WrongAnimal assigment made" << std::endl;
	this->type = a.type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	std::cout << "WrongAnimal copy constructed" << std::endl;
	*this = a;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "This sound definitly comes from a Wrong animal!" << std::endl;
}