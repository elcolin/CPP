/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:49:03 by elise             #+#    #+#             */
/*   Updated: 2022/12/16 17:27:59 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
	this->weapon = 0;
}

void    HumanB::attack()
{
	if (weapon)
    	std::cout << this->name << " attacks with their " << this->weapon->get_type() << std::endl;
	else
		std::cout << this->name << " has no weapon! " << std::endl;
}

void    HumanB::setWeapon(Weapon &new_weapon)
{
    this->weapon = &new_weapon;
}