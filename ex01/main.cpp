/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:30:42 by elise             #+#    #+#             */
/*   Updated: 2022/12/14 19:07:48 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *new_horde;

    new_horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        new_horde[i].set_name(name);
    return (new_horde);
}

int main()
{
    Zombie *Patrick_horde;
    int size = 10;
    Patrick_horde = zombieHorde(size, "Patrick");
    for (int i = 0; i < size; i++)
        Patrick_horde[i].announce();
    delete [] Patrick_horde;
    return (0);
}