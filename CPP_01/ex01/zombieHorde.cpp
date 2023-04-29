/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:31:20 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/20 15:39:08 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *new_horde;

	if (N <= 0)
		return (0);
    new_horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        new_horde[i].set_name(name);
    return (new_horde);
}