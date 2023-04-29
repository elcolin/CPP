/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:27 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 17:44:06 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <climits>

void test_try_catch(std::string name, int r_sign, int r_exec)
{	
	std::cout << "\t| Testing " << name << " with grade " << r_sign << " to sign and grade " << r_exec << " to execute |\n\n";
	try{
		Form test(name, r_sign, r_exec);
		std::cout << "Success creating " << test << std::endl;
		Bureaucrat one("one", 1);
		Bureaucrat two("two", 150);
		std::cout << "Creating Bureaucrats:" << one << " and " << two << "\n";
		{
			one.signForm(test);
		}
		{
			two.signForm(test);
		}
		one.decrement();
		two.increment();
		std::cout << "\n" << one << two << "\n";
		{
			test.beSigned(one);
			std::cout << "beSigned(one) successful\n";
		}
		{
			test.beSigned(two);
			std::cout << "beSigned(two) successful\n";
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Signing unsuccessful because "<< e.what() << std::endl;
	}
	std::cout << "\t\t\t\t\t-----\n\n";
}

int main()
{
	//FORME CANONIQUE
	std::cout << "\t\t\t-------FORME CANONIQUE-------\n\n";
	{
		Form one;
		std::cout << one << "\n";
		Form two("2", 12, 13);
		std::cout << two << "\n";
		Form test(two);
		std::cout << test << "\n";
		test = one;
		std::cout << test << "\n";
	}
	//TESTS EXCEPTIONS
	std::cout << "\t\t\t-------EXCEPTIONS INSTANCIATION-------\n\n";
	{
		test_try_catch("GradeToHigh", 0, 0);
		test_try_catch("GradeToLow", 151, 151);
		test_try_catch("HighestGrade", 1, 1);
		test_try_catch("LowestGrade", 150, 150);
		test_try_catch("INT_MAX", INT_MAX, INT_MAX);
		test_try_catch("INT_MIN", INT_MIN, INT_MIN);
	}
	std::cout << "\t\t\t-------EXCEPTIONS SIGNATURE EXECUTION-------\n\n";
	{
		test_try_catch("First", 2, 1);
		test_try_catch("Last", 150, 149);
		test_try_catch("Mid", 75, 76);
	}
}