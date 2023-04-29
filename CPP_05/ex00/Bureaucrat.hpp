/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:08:32 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/10 13:24:29 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{

	private:
		std::string const	name;
		int		grade;
	public:
		std::string getName();
		int	getGrade();
		Bureaucrat(std::string name, int grade);
		Bureaucrat();
		Bureaucrat(Bureaucrat const &a);
		Bureaucrat &operator=(Bureaucrat const &a);
		~Bureaucrat();
		class GradeTooHighException: public std::exception{
			public:
				const char *what() const throw()
				{
					return "grade is to high!\n";
				}
		};
		class GradeTooLowException: public std::exception{
			public:
				const char *what() const throw()
				{
					return "grade is to low!\n";
				}
		};
		void	increment();
		void	decrement();
		void	validGrade(int grade);
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &a);

#endif