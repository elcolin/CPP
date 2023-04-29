/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:13 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/02 17:22:56 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		void makeSound() const;
		WrongCat();
		~WrongCat();
		WrongCat &operator=(WrongCat const &a);
		WrongCat(WrongCat const &a);
};

#endif