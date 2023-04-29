/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:44:08 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/09 19:33:48 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Form *makeForm(std::string name_form, std::string target);
		Intern();
		~Intern();
		Intern(Intern const &a);
		Intern &operator=(Intern const &a);
		class DoesNotExist: public std::exception{
			public:
				const char *what() const throw()
				{
					return "form doesn't exist.\n";
				}
		};
};

#endif