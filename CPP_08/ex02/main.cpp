/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:06:41 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/16 17:32:20 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "\t\t___FORME CANONIQUE___\n\n";
		std::cout << "//Creation de mstack\n\n";
		MutantStack<int> mstack;
		mstack.push(5);
		std::cout << "//Insertion de 5\n";
		mstack.push(17);
		std::cout << "//Insertion de 17\n\n";
		std::cout << "//Creation de nstack par copie de mstack\n\n";
		MutantStack <int> nstack(mstack);
		std::cout << "nstack size: " << nstack.size() << "\n";
		MutantStack<int>::iterator it = nstack.begin();
		MutantStack<int>::iterator ite = nstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
	}
	{
		std::cout << "\t\t___MUTANTSTACK___\n\n";
		std::cout << "//Creation de mstack\n\n";
		MutantStack<int> mstack;
		std::cout << "//Insertion de 5\n";
		mstack.push(5);
		mstack.push(17);
		std::cout << "//Insertion de 17\n\n";
		std::cout << "\tPremier nombre du container: " << mstack.top() << "\n\n";
		mstack.pop();
		std::cout << "//Pop effectue (retrait du premier nombre de la stack -> 17)\n\n";
		std::cout << "\tSize apres pop: " << mstack.size() << std::endl;
		std::cout << "//Insertion de 3\n";
		mstack.push(3);
		std::cout << "//Insertion de 5\n";
		mstack.push(5);
		std::cout << "//Insertion de 737\n";
		mstack.push(737);
		//[...]
		std::cout << "//Insertion de 0\n\n";
		mstack.push(0);
		std::cout << "//Creation d'iterator sur le premier element (0) et le dernier de la stack (5)\n\n";
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\t\t___COMPARAISON AVEC STD::LIST___\n\n";
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "\tPremier nombre du container: " << mstack.back() << "\n\n";
		mstack.pop_back();
		std::cout << "\tSize apres pop: " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}