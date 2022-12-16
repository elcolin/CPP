/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:38:26 by elise             #+#    #+#             */
/*   Updated: 2022/12/16 11:35:27 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon weapon);
        void    attack();
        void    setWeapon(Weapon new_weapon);
};

#endif