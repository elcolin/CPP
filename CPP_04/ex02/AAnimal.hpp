/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:08 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 14:47:26 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
	public:
		virtual ~AAnimal();
		AAnimal();
		AAnimal &operator=(AAnimal const &a);
		AAnimal(AAnimal const &a);
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif