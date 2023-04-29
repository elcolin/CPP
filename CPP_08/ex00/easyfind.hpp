/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:41:36 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/16 18:38:01 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>

class NoOccurence : public std::exception
{
	const char *what() const throw()
	{
		return "No occurrencies in container\n";
	}	
};

template <typename T>
typename T::iterator easyfind(T &a, int i)
{
	if (!a.size())
		throw(NoOccurence());
	typename T::iterator it = find(a.begin(), a.end(), i);
	if (it == a.end())
		throw(NoOccurence());
	return it;
}

#endif