/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:08 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/02 17:24:59 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		~WrongAnimal();
		WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &a);
		WrongAnimal(WrongAnimal const &a);
		void makeSound() const;
		std::string getType() const;
};

#endif