/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:32 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/08 20:20:17 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

	private:
		std::string const	name;
		int		grade;
	public:
		std::string getName() const;
		int	getGrade() const;
		Bureaucrat(std::string name, int grade);
		Bureaucrat();
		Bureaucrat(Bureaucrat const &a);
		Bureaucrat &operator=(Bureaucrat const &a);
		~Bureaucrat();
		class GradeTooHighException: public std::exception{
			public:
				const char *what() const throw()
				{
					return "Grade to high!\n";
				}
		};
		class GradeTooLowException: public std::exception{
			public:
				const char *what() const throw()
				{
					return "Grade to low!\n";
				}
		};
		void	increment();
		void	decrement();
		void	validGrade(int grade) const;
		void	signForm(Form &a);
		void	executeForm(Form const &a);
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &a);

#endif