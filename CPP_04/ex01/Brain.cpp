/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:46:36 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/06 17:43:48 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    static int j;
    std::cout << "Brain constructed!" << std::endl;
    this->ideas = new std::string[100];
	if (j > 9)
		j = 0;
    this->ideas[0] = j + 48;
    j++;
    for (int i = 1; i < 100; i++)
        this->ideas[i] = " Human, I'm hungry";
}

Brain::~Brain()
{
    std::cout << "Brain destructed!" << std::endl;
    delete [] ideas;
}

Brain &Brain::operator=(Brain const &a)
{
    std::cout << "Brain assigment made!" << std::endl;
    for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
    return this->ideas;
}

Brain::Brain(Brain const &a)
{
    std::cout << "Brain copy constructed!" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = a.ideas[i];
}