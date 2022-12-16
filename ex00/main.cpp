/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:30:42 by elise             #+#    #+#             */
/*   Updated: 2022/12/14 18:15:47 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

 Zombie* newZombie( std::string name)
 {
    Zombie *new_folk;

    new_folk = new Zombie;
    new_folk->set_name(name);
    return (new_folk);
 }

void randomChump( std::string name )
{
    Zombie  new_folk;

    new_folk.set_name(name);
    new_folk.announce();
}

int main()
{
    Zombie *Patrick;
    Patrick = newZombie("Patrick");
    Patrick->announce();
    randomChump("A random dude");
    Patrick->announce();
    randomChump("Another dude");
    Patrick->announce();
    delete Patrick;
    return (0);
}