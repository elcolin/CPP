/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:44:42 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/30 17:24:26 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		void attack(const std::string& target);
		ScavTrap(std::string name);
		ScavTrap();
		void guardGate();
		~ScavTrap();
		ScavTrap &operator =(const ScavTrap &a);
		ScavTrap(const ScavTrap &a);
};

#endif