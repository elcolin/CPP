/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:35:33 by elise             #+#    #+#             */
/*   Updated: 2023/01/02 14:26:49 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " constructed!" << std::endl;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    this->name = name;
}

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructed!" << std::endl;
	this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
	this->name = "Default";
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << a.name << " copy constructed!" << std::endl;
	*this = a;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &a)
{
	std::cout << "ClapTrap assigment made!" << std::endl;
	this->energy_points = a.energy_points;
	this->hit_points = a.hit_points;
	this->name = a.name;
	return (*this);
}

int	ClapTrap::do_something()
{
	if (!this->energy_points)
	{
		std::cout << this->name  << " has no more energy left!" << std::endl;
        return 0;
	}
	else if(!this->hit_points)
	{
		std::cout << this->name  << " has no more HP left!" << std::endl;
		return 0;
	}
	return (1);
}

void	ClapTrap::attack(const std::string& target)
{
    if (!this->do_something())
		return;
    std::cout << this->name << " attacks " << target << " causing "  << this->attack_damage << " points of damage! " << std::endl;
    --this->energy_points;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >this->hit_points)
        this->hit_points = 0;
    else
        this->hit_points -= amount;
    std::cout << this->name << " deals some damage, he now has " << this->hit_points << " HP!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (!do_something())
		return;
	if (amount + hit_points >= UINT_MAX || amount == UINT_MAX || hit_points == UINT_MAX)
		this->hit_points = UINT_MAX;
	else
    	this->hit_points += amount;
    --this->energy_points;
    std::cout << this->name << " repairs himself, he now has " << this->hit_points << " HP and " << this->energy_points << " energy points" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destructed!" << std::endl;
}