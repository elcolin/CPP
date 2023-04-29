/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:27 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 17:40:59 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <climits>

void test_try_catch(std::string name, int grade, int i)
{
	std::string incdec[2] = {"incrementing","decrementing"};	
	std::cout << "Testing " << name << " with grade " << grade << "\n";
	try{
		Bureaucrat test(name, grade);
		std::cout << "Success creating " << test << std::endl;
		if (i > 0)
			test.decrement();
		else if (!i)
			test.increment();
		if (i != -1)
			std::cout << "Success " << incdec[i] << " " << test << std::endl;
	}
	catch (std::exception & e)
	{
		if (i != -1)
			std::cout << "Unsuccessful " << incdec[i] << " because ";
		std::cout << e.what() << std::endl;
	}
	std::cout << "\t\t-----\n";
}

int main()
{
	//FORME CANONIQUE
	std::cout << "-------FORME CANONIQUE-------\n\n";
	{
		Bureaucrat test;//Default constructeur
		std::cout << test << std::endl;
		Bureaucrat one("1", 1);//Constructeur
		std::cout << one << std::endl;
		Bureaucrat two(one);//Constructeur par copie
		std::cout << two << std::endl;
		two = test; //name is const and cannot be changed
		std::cout << two << "\n\n";
	}
	//TESTS EXCEPTIONS
	std::cout << "-------EXCEPTIONS INSTANCIATION-------\n\n";
	{
		test_try_catch("GradeToHigh", 0, -1);
		test_try_catch("GradeToLow", 151, -1);
		test_try_catch("HighestGrade", 1, -1);
		test_try_catch("LowestGrade", 150, -1);
		test_try_catch("INT_MAX", INT_MAX, -1);
		test_try_catch("INT_MIN", INT_MIN, -1);
	}
	std::cout << "-------EXCEPTIONS INCREMENTATION DECREMENTATION-------\n\n";
	{
		test_try_catch("HighestGrade", 1, 0);
		test_try_catch("LowestGrade", 150, 1);
		test_try_catch("First", 2, 0);
		test_try_catch("Last", 149, 1);
	}
}