/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:42:19 by elise             #+#    #+#             */
/*   Updated: 2023/01/10 16:19:24 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "Default")
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target)
{
    
}

void PresidentialPardonForm::valid_execute() const
{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
	(void) a;
	return (*this);
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a) : Form("PresidentialPardonForm", 25, 5, a.getTarget())
{
	
}