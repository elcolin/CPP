/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:12:51 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/02 17:23:51 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructed" << std::endl;
	this->type = "WrongCat";
}

WrongCat &WrongCat::operator=(WrongCat const &a)
{
	std::cout << "WrongCat assigment made" << std::endl;
	this->type = a.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat const &a)
{
	std::cout << "WrongCat copy constructed" << std::endl;
	*this = a;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "This sound definitly comes from a Wrong Cat!" << std::endl;
}