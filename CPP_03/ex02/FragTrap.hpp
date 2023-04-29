/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:30:57 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/30 17:48:59 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		~FragTrap();
		FragTrap();
		FragTrap(FragTrap const &a);
		FragTrap &operator=(FragTrap const &a);
		FragTrap(std::string name);
		void highFivesGuys(void);
};

#endif