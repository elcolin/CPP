/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:27 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 17:27:38 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <climits>

void test_try_catch(Form *form)
{
	std::cout << *form;
	Bureaucrat king_arthur("King Arthur", 1);
	std::cout << king_arthur;
	{
		king_arthur.executeForm(*form);
		king_arthur.signForm(*form);
		king_arthur.executeForm(*form);
	}
	std::cout << "\t\t\t\t------\n";
	delete form;
}

int main()
{
	//FORME CANONIQUE
	std::cout << "\t\t\t-------FORME CANONIQUE-------\n\n";
	{
		{
			Intern one;
			Intern test(one);
			test = one;
		}
	}
	//TESTS EXCEPTIONS
	std::cout << "\t\t\t-------EXCEPTIONS FORM EXISTS-------\n\n";
	{
		Intern robot;
		std::cout << "\t\t\t____ROBOTOMY REQUEST____" << "\n\n";
		try{
			test_try_catch(robot.makeForm("robotomy request", "president"));
			test_try_catch(robot.makeForm("rgrrfdobotomy request", "president"));
		}
		catch(std::exception & e)
		{
			std::cout << "Couldn't access request because " << e.what() << "\n";
		}
		std::cout << "\t\t\t____PRESIDENTIAL PARDON____" << "\n\n";
		try{
			test_try_catch(robot.makeForm("presidential pardon", "president"));
			test_try_catch(robot.makeForm(" presidential pardon ", "president"));
		}
		catch(std::exception & e)
		{
			std::cout << "Couldn't access request because " << e.what()<< "\n";
		}
		std::cout << "\t\t\t____SHRUBBERY CREATION____" << "\n\n";
		try{
			test_try_catch(robot.makeForm("shrubbery creation", "president"));
			test_try_catch(robot.makeForm("hrubbery creatio", "president"));
		}
		catch(std::exception & e)
		{
			std::cout << "Couldn't access request because " << e.what()<< "\n";
		}
	}
}