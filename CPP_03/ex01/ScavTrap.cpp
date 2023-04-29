/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:44:39 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/30 17:40:45 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructed!\n";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default ScavTrap constructed!" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed!\n";
}
ScavTrap &ScavTrap::operator =(const ScavTrap &a)
{
	std::cout << "ScavTrap assigment made!" << std::endl;
	this->energy_points = a.energy_points;
	this->hit_points = a.hit_points;
	this->name = a.name;
	this->attack_damage = a.attack_damage;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
	std::cout << "ScavTrap copy constructed!" << std::endl;
	*this = a;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->do_something())
		return;
    std::cout << this->name << " rolls over " << target << " causing "  << this->attack_damage << " points of damage! " << std::endl;
    --this->energy_points;
}

void ScavTrap::guardGate()
{
	if (!this->do_something())
		return;
	std::cout << this->name << " enters Gate keeper mode!\n Have you read all the books at least 3 times? Did you see the full extended version of the movie?\n";
}