/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:57:15 by elise             #+#    #+#             */
/*   Updated: 2023/01/09 18:24:14 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "Default")
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{
    
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &a)
{
	(void) a;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a) : Form("ShrubberyCreationForm", 145, 137, a.getTarget())
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void ShrubberyCreationForm::valid_execute() const
{
	std::ofstream f(getTarget().append("_shrubbery").c_str(), std::ios::out | std::ios::app);
	if (!f.is_open())
	{
		std::cout << "Oho! Couldn't open file\n";
		return;
	}
	f << 
	"       {{ }{\n"
    "      {{}}}{{\n"
    "    {{}}{}}\n"
    "       }}}}{\n"
    "      {{}}}\n"
    "     }{{}{}}\n"
    "       {{}{}}\n"
    "     }}{{}}\n"
    "      {{}}{{\n"
    "       \\  /\n"
    "    .-''| |``-.\n"
    "   '-._/_o_\\_.-'\n"
    "    `._     _.'\n"
    "     | :-__-: |\n"
    "     `._    .'\n"
    "        `--'\n"
	"    A SHRUBBERY!!\n";
	f.close();
}