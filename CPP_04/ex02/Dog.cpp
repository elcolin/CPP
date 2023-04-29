/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:16:43 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 15:24:45 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructed" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog &Dog::operator=(Dog const &a)
{
	std::cout << "Dog assigment made" << std::endl;
	this->type = a.type;
	(*brain) = *a.brain;
	return (*this);
}

Dog::Dog(Dog const &a)
{
	std::cout << "Dog copy constructed" << std::endl;
	this->brain = new Brain(*a.brain);
	this->type = a.type;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "This sound definitly comes from a Dog!" << std::endl;
}

std::string *Dog::getIdeas()
{
    return this->brain->getIdeas();
}