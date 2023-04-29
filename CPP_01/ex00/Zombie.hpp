/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:31:00 by elise             #+#    #+#             */
/*   Updated: 2022/12/20 15:24:26 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP
#include <iostream>
#include <new>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce(void);
        Zombie(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif