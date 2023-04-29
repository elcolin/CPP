/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:08:45 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/09 18:10:40 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &a);
		RobotomyRequestForm(RobotomyRequestForm const &a);
        void valid_execute() const;
};

#endif