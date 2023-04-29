/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:19:33 by elise             #+#    #+#             */
/*   Updated: 2023/01/10 16:13:00 by ecolin           ###   ########.fr       */
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
		const	std::string target;
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
        class isNotSigned: public std::exception{
			public:
				const char *what() const throw()
				{
					return "form isn't signed.\n";
				}
		};
        std::string getName() const;
        bool    isSigned() const;
        int   getRequiredToSign() const;
        int   getRequiredToExec() const;
		std::string getTarget() const;
        Form &operator=(const Form &a);
        Form(Form const &a);
        Form();
        Form(const std::string name, int r_sign, int r_exec, std::string const target);
        ~Form();
        void    validGrade(int grade) const;
        void    beSigned(Bureaucrat &a);
        void    execute(Bureaucrat const & executor) const;
        virtual void    valid_execute() const = 0;
};

std::ostream &operator<<(std::ostream &os, Form &a);

#endif