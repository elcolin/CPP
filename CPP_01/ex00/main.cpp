/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:30:42 by elise             #+#    #+#             */
/*   Updated: 2022/12/20 15:29:12 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Patrick;
	Zombie *Zack;
	Zack = newZombie("Zack");
    Patrick = newZombie("Patrick");
    Patrick->announce();
	Zack->announce();
	delete Zack;
    randomChump("A random dude");
    Patrick->announce();
    randomChump("Another dude");
	Zack = Patrick;
    Patrick->announce();
	Zack->announce();
    delete Patrick;
    return (0);
}