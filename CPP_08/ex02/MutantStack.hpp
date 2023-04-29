/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:08:03 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/16 17:31:14 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack <T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		MutantStack()
		{
			
		}
		MutantStack(MutantStack const &a)
		{
			*this = a;
		}
		MutantStack &operator=(MutantStack const &a)
		{
			this->c = a.c;
			return (*this);
		}
		~MutantStack()
		{
			
		}
};

#endif