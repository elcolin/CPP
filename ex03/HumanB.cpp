/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:49:03 by elise             #+#    #+#             */
/*   Updated: 2022/12/16 11:35:24 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.get_type() << std::endl;
}

void    HumanB::setWeapon(Weapon new_weapon)
{
    this->weapon = new_weapon;
}