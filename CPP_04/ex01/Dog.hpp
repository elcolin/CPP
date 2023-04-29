/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:15 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 14:37:22 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		void makeSound() const;
		Dog();
		~Dog();
		Dog &operator=(Dog const &a);
		Dog(Dog const &a);
		std::string *getIdeas();
};

#endif