/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:37:43 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/16 18:35:04 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <climits>

std::ostream &operator<<(std::ostream &os, std::vector <int> tab)
{
	for (unsigned long int i = 0; i < tab.size(); i ++)
		os << tab[i] << "\n";
	return (os);
}

int main()
{
	std::cout << "\t\t___ERROR TEST___\n\n";
	try{
		std::vector <int> tab;
		std::vector <int>::iterator it;
		std::cout << "tab: \n";
		tab.push_back(10);
		tab.push_back(-5);
		tab.push_back(INT_MIN);
		std::cout << tab;
		std::cout << "Attempt to find " << INT_MAX << "\n"; 
		it = easyfind(tab, INT_MAX);
		std::cout <<"Result: "<<  *it << "\n";
	}
	catch(std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << "\t\t___SUCCESS TEST___\n\n";
	try{
		std::vector <int> tab;
		std::vector <int>::iterator it;
		std::cout << "tab: \n";
		tab.push_back(10);
		tab.push_back(-5);
		tab.push_back(INT_MIN);
		std::cout << tab;
		std::cout << "Attempt to find " << INT_MIN << "\n"; 
		it = easyfind(tab, INT_MIN);
		std::cout <<"Result: "<<  *it << "\n";
	}
	catch(std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << "\t\t___EMPTY TEST___\n\n";
	try{
		std::vector <int> tab;
		std::vector <int>::iterator it;
		std::cout << "tab: \n";
		std::cout << tab;
		std::cout << "Attempt to find " << 2<< "\n"; 
		it = easyfind(tab, 2);
		std::cout <<"Result: "<<  *it << "\n";
	}
	catch(std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << "\n\n";
}