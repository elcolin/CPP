/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:30 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 17:40:29 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
	grade = 150;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &a)
{
	this->grade = a.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &a): name(a.name)
{
	*this = a;
}

void	Bureaucrat::validGrade(int grade) const
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	validGrade(grade);
	this->grade = grade;
}

void	Bureaucrat::increment()
{
	validGrade(grade - 1);
	this->grade--;
}

void	Bureaucrat::decrement()
{
	validGrade(grade + 1);
	this->grade++;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::signForm(Form &a)
{
	try {
		a.beSigned(*this);
		std::cout << this->name << " signed " << a.getName() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << this->name << " couldn't sign " << a.getName() << " because his " << e.what();
	}
}

Bureaucrat::~Bureaucrat()
{
	
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &a)
{
	os << a.getName() << ", bureaucrat grade " << a.getGrade() << ".\n";
	return (os);
}

void	Bureaucrat::executeForm(Form const &a)
{
	try {
		a.execute(*this);
		std::cout << this->name << " executed " << a.getName() << std::endl; 
	}
	catch (std::exception const &e)
	{
		std::cout << this->name << " couldn't execute " << a.getName() << " because his " << e.what();
	}
}