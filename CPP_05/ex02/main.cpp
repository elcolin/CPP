/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:27 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 16:53:56 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <climits>

void test_try_catch(Form *form)
{
	Bureaucrat king_arthur("King Arthur", 1);
	std::cout << king_arthur;
	{
		king_arthur.executeForm(*form);
		king_arthur.signForm(*form);
		king_arthur.executeForm(*form);
	}
	std::cout << "\n";
	Bureaucrat test("Lowgrade", 138);
	std::cout << test;
	{
		test.executeForm(*form);
		test.signForm(*form);
		test.executeForm(*form);
	}
	std::cout << "\t\t\t\t------\n\n";
}

int main()
{
	//FORME CANONIQUE
	std::cout << "\t\t\t-------FORME CANONIQUE-------\n\n";
	{
		{
			ShrubberyCreationForm one;
			std::cout << one << "\n";
			ShrubberyCreationForm two("jardin");
			std::cout << two << "\n";
			ShrubberyCreationForm test(two);
			std::cout << test << "\n";
			test = one;
			std::cout << test << "\n";
		}
		{
			RobotomyRequestForm one;
			std::cout << one << "\n";
			RobotomyRequestForm two("jardin");
			std::cout << two << "\n";
			RobotomyRequestForm test(two);
			std::cout << test << "\n";
			test = one;
			std::cout << test << "\n";
		}
		{
			PresidentialPardonForm one;
			std::cout << one << "\n";
			PresidentialPardonForm two("jardin");
			std::cout << two << "\n";
			PresidentialPardonForm test(two);
			std::cout << test << "\n";
			test = one;
			std::cout << test << "\n";
		}
	}
	//TESTS EXCEPTIONS
	std::cout << "\t\t\t-------EXCEPTIONS SIGNATURE EXECUTION-------\n\n";
	{
		ShrubberyCreationForm shrubbery("Knights who says Ni!");
		test_try_catch(&shrubbery);
		RobotomyRequestForm robot("Intern");
		test_try_catch(&robot);
		PresidentialPardonForm president("Intern");
		test_try_catch(&president);
	}
}