/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:44:48 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/12 17:20:48 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	i = 0;
	name = "Default";
}
Data::Data(Data const &a)
{
	*this = a;
}
Data &Data::operator=(Data const &a)
{
	i = a.i;
	name = a.name;
	return (*this);
}
Data::~Data()
{
	
}

Data::Data(int i, std::string name): i(i), name(name)
{
	
}

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data *> (raw));
}

int Data::getI()
{
	return this->i;
}

std::string Data::getName()
{
	return this->name;
}

std::ostream &operator<<(std::ostream &os, Data &a)
{
	os << a.getName() << " value:\t";
	os << a.getI() << "\n";
	return (os);
}