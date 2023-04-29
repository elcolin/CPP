/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:19:09 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/14 12:27:26 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	{
		std::cout << "\t\t\t___ITER SUR STRING___\n\n";
		std::cout << "\t---> std::string test = \"Ceci est un test\"; <---\n\n";
		std::string test = "Ceci est un test";
		std::cout << "Fonction de template print (print un espace + valeur):\n\n";
		iter(test.c_str(), test.length(), &print);
		std::cout << "\n\n";
		std::cout << "Fonction de template add (ajoute + 1 a la valeur) + print:\n\n";
		iter(test.c_str(), test.length(), &add);
	}
	std::cout << "\n\n";
	{
		std::cout << "\t\t\t___ITER SUR TAB DE INT___\n\n";
		std::cout << "\t--->int test[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; <---\n\n";
		int test[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		std::cout << "Fonction de template print:\n\n";
		iter(test, 10, &print);
		std::cout << "\n\n";
		std::cout << "Fonction de template add (ajoute + 1 a la valeur) + print:\n\n";
		iter(test, 10, &add);
	}
	std::cout << "\n\n";
	{
		std::cout << "\t\t\t___ITER SUR TAB DE RANDOM___\n\n";
		Random test[3] = {Random(1, "A"), Random(2, "B"), Random(3, "C")};
		std::cout << "\t--->Random test[3] = {Random(1, \"A\"), Random(2, \"B\"), Random(3, \"C\")}; <---\n\n";
		std::cout << "Fonction de template print:\n\n";
		iter(test, 3, &print);
		std::cout << "\n";
		std::cout << "Fonction de template add (ajoute + 1 a la valeur) + print:\n\n";
		iter(test, 3, &add);
	}
}