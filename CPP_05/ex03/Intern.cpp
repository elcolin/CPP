/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:44:04 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 16:59:33 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor called\n";
}

Intern::~Intern()
{
	std::cout << "Destructor called\n";
}

Intern &Intern::operator=(Intern const &a)
{
	std::cout << "Assignement operator called\n";
	(void) a;
	return (*this);
}

Intern::Intern(Intern const &a)
{
	std::cout << "Copy constructor called\n";
	(void) a;
}

Form *Intern::makeForm(std::string name_form, std::string target)
{
	int r = -1;
	std::string request[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form *tab[3] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (name_form != request[i])
			delete tab[i];
		else
			r = i;
	}
	if (r == -1)
		throw(DoesNotExist());
	return (tab[r]);	
}