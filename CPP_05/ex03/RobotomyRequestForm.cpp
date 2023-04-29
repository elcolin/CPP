/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:08:42 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/09 18:33:37 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "Default")
{

}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target)
{
	
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
{
	(void) a;
	return (*this);
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a) : Form("RobotomyRequestForm", 72, 45, a.getTarget())
{
	
}
void RobotomyRequestForm::valid_execute() const
{
	srand(time(NULL));
	int i = rand() % 2;
	std::cout << "*drill noises* ";
	if (!i)
		std::cout << this->getTarget() << " robotomized successfully!\n";
	else
		std::cout << "Ohoh! Robotomization of " << this->getTarget() << " unsuccessful!\n";
}