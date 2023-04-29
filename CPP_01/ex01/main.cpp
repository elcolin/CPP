/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:30:42 by elise             #+#    #+#             */
/*   Updated: 2022/12/20 15:41:01 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Patrick_horde;
    int size = 10;
    Patrick_horde = zombieHorde(size, "Patrick");
	if (!Patrick_horde)
		return (0);
    for (int i = 0; i < size; i++)
        Patrick_horde[i].announce();
    delete [] Patrick_horde;
    return (0);
}