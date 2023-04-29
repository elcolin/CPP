/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:44:53 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/12 17:26:39 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data *a = new Data(12, "A");
	uintptr_t b;
	std::cout << "\n(*a) =\n";
	std::cout << *a << "A address:\t" << a << "\n\n\t---Serialization of A stored in B---\n\n";
	b = serialize(a);
	std::cout << "serialize(a) =\n";
	std::cout << "B value:\t" << b << "\nB address:\t" << &b << "\n";
	std::cout << "\n\t---Deserialization of A stored in B---\n\n";
	std::cout << "*deserialize(b) = \n";
	std::cout << *deserialize(b) << "A address:\t" << deserialize(b);
}