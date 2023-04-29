/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:35:40 by elise             #+#    #+#             */
/*   Updated: 2023/01/02 14:28:18 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap test("ClapTrap");
	ClapTrap copie(test);
    test.attack("escalier");
    test.takeDamage(9);
    test.beRepaired(3);
    test.attack("escalier");
    for (int i = 0; i < 7; i++)
	{
		test.beRepaired(10);
	}
	test.attack("escalier");
    test.takeDamage(74);
	copie = ClapTrap("SwagTrap");
	copie.takeDamage(10);
    copie.beRepaired(3);
	ClapTrap useless;
	useless.attack("escalier");
	useless.takeDamage(9);
}