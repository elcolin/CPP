/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:06:18 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/07 15:18:47 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal *tab[4];
	for (int i = 0; i < 4; i++)
	{
		if(i < 2)
			tab[i] = new Cat();	
		else
			tab[i] = new Dog();
		std::cout << "\n";
	}
	std::cout << "\n";
	for (int i = 0; i < 4; i++)
	{
		tab[i]->makeSound();
		std::cout << "\n";
	}
	for (int i = 0; i < 4; i++)
			delete tab[i];
	
	std::cout << "\n\n------Constructeur par copie, copie profonde:------\n\n";
	Cat *test = new Cat();
	std::cout << "Original's idea: ";
	for (int i = 0; i < 100; i++)
		std::cout << test->getIdeas()[i];
	std::cout << "\n\n";
	Cat *copy = new Cat(*test);
	std::cout << "\n";
	delete test;
	std::cout << "Copy's idea: " << copy->getIdeas()[0] << "\n\n";
	delete copy;

	std::cout << "\n\n------Assignation:------\n\n";
	Dog* j = new Dog();
	Dog *k = new Dog();
	std::cout << "\nNew Dog base idea: "  << j->getIdeas()[0] << "\n";
	std::cout << "\nSecond Dog base idea: "  << k->getIdeas()[0] << "\n";
	std::cout << "\n";
	*j = *k;
	delete k;
	std::cout << "\n";
	std::cout << "New Dog new idea: "  << j->getIdeas()[0] << "\n\n";
	delete j;

	///AANIMAL TEST///
	// test = new AAnimal();
}