/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:34:30 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/06 16:15:52 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain();
		~Brain();
		Brain &operator=(Brain const &a);
		Brain(Brain const &a);
		std::string *getIdeas();
};

#endif