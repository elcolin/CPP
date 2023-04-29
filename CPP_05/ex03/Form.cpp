/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:37:59 by elise             #+#    #+#             */
/*   Updated: 2023/01/10 16:44:46 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), r_sign(150), r_exec(150), target("Default")
{
    this->is_signed = false;
}

void	Form::validGrade(int grade) const
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Form::Form(const std::string name, int r_sign, int r_exec, std::string const target) : name(name), r_sign(r_sign), r_exec(r_exec), target(target)
{
    validGrade(r_exec);
    validGrade(r_sign);
    this->is_signed = false;
}

Form::~Form()
{
    
}

Form &Form::operator=(const Form &a)
{
	this->is_signed = a.is_signed;
	return (*this);
}

Form::Form(Form const &a) : name(a.getName()), r_sign(a.getRequiredToSign()), r_exec(a.getRequiredToExec()), target(a.getTarget())
{
	this->is_signed = false;
}

std::string Form::getName() const
{
    return this->name;
}

std::string Form::getTarget() const
{
	return this->target;
}

int   Form::getRequiredToSign() const
{
    return this->r_sign;
}

int   Form::getRequiredToExec() const
{
    return this->r_exec;
}

bool    Form::isSigned() const
{
    return this->is_signed;
}

void    Form::beSigned(Bureaucrat &a)
{
    if(a.getGrade() > r_sign)
        validGrade(151);
    this->is_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form &a)
{
    os << a.getName() << " needs at least grade " << a.getRequiredToSign() << " to sign and grade " << a.getRequiredToExec() << " to execute\n";
    return os;
}

void    Form::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->getRequiredToExec())
        validGrade(151);
    if (!isSigned())
        throw isNotSigned();
    this->valid_execute();
}