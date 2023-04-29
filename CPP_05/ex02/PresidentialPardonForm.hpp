/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:57:19 by elise             #+#    #+#             */
/*   Updated: 2023/01/09 18:38:40 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &a);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &a);
		~PresidentialPardonForm();
        void valid_execute() const;
};

#endif