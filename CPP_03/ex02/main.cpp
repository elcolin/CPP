/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:35:40 by elise             #+#    #+#             */
/*   Updated: 2023/01/02 14:10:31 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap test("R2D2");
    test.attack("escalier");
    test.takeDamage(9);
    test.beRepaired(3);
	test.highFivesGuys();
	test.takeDamage(1000);
    test.attack("escalier");
	FragTrap one;
	one = FragTrap("C-3PO");
	one.beRepaired(1);
    // test.beRepaired(3);
	FragTrap two(one);
	one.attack("escalier");
	two.attack("escalier");
}