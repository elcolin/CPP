/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:30 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 17:40:10 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
	grade = 150;
	std::cout << "Default constructor called\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &a)
{
	this->grade = a.grade;
	std::cout << "Assignment operator called\n";
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &a): name(a.name)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

void	Bureaucrat::validGrade(int grade)
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
	std::cout << "Constructor called\n";
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

std::string Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

Bureaucrat::~Bureaucrat()
{
	
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &a)
{
	os << a.getName() << ", bureaucrat grade " << a.getGrade() << ".\n";
	return (os);
}