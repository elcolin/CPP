/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:31:17 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/02 14:13:25 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destoyed!" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructed!" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap &FragTrap::operator=(FragTrap const &a)
{
	this->energy_points = a.energy_points;
	this->hit_points = a.hit_points;
	this->attack_damage = a.attack_damage;
	this->name = a.name;
	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap "<< name << " constructed!" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

void FragTrap::highFivesGuys(void)
{
	if (!do_something())
		return;
	std::cout << "Wassup? Give me a high five!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &a)
{
	std::cout << "FragTrap copy constructed!" << std::endl;
	*this = a;
}