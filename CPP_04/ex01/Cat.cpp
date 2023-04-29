/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:12:51 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 15:23:02 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructed" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat &Cat::operator=(Cat const &a)
{
	std::cout << "Cat assigment made" << std::endl;
	this->type = a.type;
	(*brain) = *a.brain;
	return (*this);
}

Cat::Cat(Cat const &a)
{
	std::cout << "Cat copy constructed" << std::endl;
	this->brain = new Brain(*a.brain);
	this->type = a.type;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "This sound definitly comes from a Cat!" << std::endl;
}

std::string *Cat::getIdeas()
{
    return this->brain->getIdeas();
}