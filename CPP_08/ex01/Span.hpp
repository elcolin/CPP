/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:06:07 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/16 17:50:04 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span{
	private:
		unsigned int N;
		std::vector <int> tab;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &a);
		~Span(){};
		Span &operator=(Span const &a);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(int i);
		void addNumber(std::vector <int> ::iterator first, std::vector <int> ::iterator last);
		class MaxNumber : public std::exception
		{
			const char *what() const throw()
			{
				return ("Max numbers reached\n");
			}
		};
		class NoDistance : public std::exception
		{
			const char *what() const throw()
			{
				return ("No distances available\n");
			}
		};
		int operator[](unsigned int i)
		{
			return (tab[i]);
		}
		unsigned int current_size()
		{
			return tab.size();
		}
		
};
std::ostream &operator<<(std::ostream &os, Span &a);

#endif