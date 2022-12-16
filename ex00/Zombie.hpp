/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:31:00 by elise             #+#    #+#             */
/*   Updated: 2022/12/14 18:08:23 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce(void);
        void    set_name(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );