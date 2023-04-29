/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:42:54 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/12 18:12:13 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *g = generate();
	std::cout << "Identification with pointer function: ";
	identify(g);
	std::cout << "Identification with reference function: ";
	identify(*g);
	delete g;
}