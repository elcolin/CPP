/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:08 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/02 17:24:59 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		virtual ~Animal();
		Animal();
		Animal &operator=(Animal const &a);
		Animal(Animal const &a);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif