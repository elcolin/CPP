/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:12:51 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 15:26:45 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructed" << std::endl;
	this->type = "Cat";
}

Cat &Cat::operator=(Cat const &a)
{
	std::cout << "Cat assigment made" << std::endl;
	this->type = a.type;
	return (*this);
}

Cat::Cat(Cat const &a)
{
	std::cout << "Cat copy constructed" << std::endl;
	*this = a;
}

Cat::~Cat()
{
	std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "This sound definitly comes from a Cat!" << std::endl;
}