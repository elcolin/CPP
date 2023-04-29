/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:19:33 by elise             #+#    #+#             */
/*   Updated: 2023/01/10 15:41:01 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

    private:
        const   std::string name;
        bool    is_signed;   
        const int r_sign;
        const int r_exec;
    public:
        class GradeTooHighException: public std::exception{
			public:
				const char *what() const throw()
				{
					return "grade is to high.\n";
				}
		};
		class GradeTooLowException: public std::exception{
			public:
				const char *what() const throw()
				{
					return "grade is to low.\n";
				}
		};
        std::string getName() const;
        bool    isSigned();
        int   getRequiredToSign() const;
        int   getRequiredToExec() const;
        Form &operator=(const Form &a);
        Form(Form const &a);
        Form();
        Form(const std::string name, int r_sign, int r_exec);
        ~Form();
        void    validGrade(int grade);
        void    beSigned(Bureaucrat &a);
};

std::ostream &operator<<(std::ostream &os, Form &a);

#endif