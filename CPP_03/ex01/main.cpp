/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:35:40 by elise             #+#    #+#             */
/*   Updated: 2023/01/02 14:14:30 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap test("R2D2");
    test.attack("escalier");
    test.takeDamage(9);
    test.beRepaired(3);
    test.attack("escalier");
	test.guardGate();
	test.takeDamage(1000);
    test.attack("escalier");
	ScavTrap one;
	one = ScavTrap("C-3PO");
	one.beRepaired(1);
	ScavTrap two(one);
	one.attack("escalier");
	two.attack("escalier");
}