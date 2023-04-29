/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:06 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 14:37:03 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructed" << std::endl;
	this->type = "AAnimal";
}

AAnimal &AAnimal::operator=(AAnimal const &a)
{
	std::cout << "AAnimal assigment made" << std::endl;
	this->type = a.type;
	return (*this);
}

AAnimal::AAnimal(AAnimal const &a)
{
	std::cout << "AAnimal copy constructed" << std::endl;
	this->type = a.type;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructed" << std::endl;
}