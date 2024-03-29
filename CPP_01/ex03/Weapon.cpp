/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:42:57 by elise             #+#    #+#             */
/*   Updated: 2022/12/16 17:24:46 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string   &Weapon::get_type()
{
    return this->type;
}
void   Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{
	
}