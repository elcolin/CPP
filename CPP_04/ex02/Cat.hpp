/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:13 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 15:04:41 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"

class Cat: public AAnimal
{
	private:
		Brain *brain;
	public:
		void makeSound() const;
		Cat();
		~Cat();
		Cat &operator=(Cat const &a);
		Cat(Cat const &a);
		std::string *getIdeas();
};

#endif