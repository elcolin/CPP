/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:43:34 by elise             #+#    #+#             */
/*   Updated: 2022/12/20 17:16:55 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon) : weapon(new_weapon)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.get_type() << std::endl;
}