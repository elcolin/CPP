/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:06 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 14:37:03 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructed" << std::endl;
	this->type = "Animal";
}

Animal &Animal::operator=(Animal const &a)
{
	std::cout << "Animal assigment made" << std::endl;
	this->type = a.type;
	return (*this);
}

Animal::Animal(Animal const &a)
{
	std::cout << "Animal copy constructed" << std::endl;
	this->type = a.type;
}

std::string	Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal destructed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "This sound definitly comes from an animal!" << std::endl;
}