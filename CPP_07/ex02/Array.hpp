/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:50:46 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/14 13:50:42 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#define MAX_VAL 750

#include <iostream>
#include <climits>
#include <cstdlib>

template <class T>
class Array{
	private:
		T	*array;
		unsigned int	n;
	public:
		Array(): array(NULL), n(0){ std::cout << "Empty Constructor Called\n";}
		Array(Array const &a): array(NULL), n(0)
		{
			std::cout << "Copy Constructor Called\n";
			*this = a;
		}
		Array(unsigned int n)
		{
			std::cout << "Constructor called\n";
			if (n < 0 || n > MAX_VAL)
				throw(InvalidSize());
			if (!n)
			{
				this->n = 0;
				this->array = NULL;
				return;
			}
			array = new T[n];
			this->n = n;
		}
		~Array()
		{
			std::cout << "Destructor called\n";
			if (array)
				delete [] array;
		}
		Array &operator=(Array const &a)
		{
			std::cout << "Assignment operator called\n";
			if (array)
			{
				delete [] this->array;
				this->array = NULL;
			}
			this->n = a.size();
			if (!a.array)
				return (*this);
			this->array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				array[i] = a.array[i];
			return (*this);
		}
		T &operator[](unsigned int i)
		{
			if (i >= n || i < 0)
				throw(InvalidIndex());
			return array[i];
		}
		class InvalidIndex: public std::exception {
			public:
				const char *what() const throw()
				{
					return "Invalid index\n";
				}
		};
		class InvalidSize: public std::exception {
			public:
				const char *what() const throw()
				{
					return "Invalid size\n";
				}
		};
		unsigned int size() const
		{
			return (this->n);
		}
};

template <typename T>
std::ostream &operator<<(std::ostream &os, Array <T> &a)
{
	for (unsigned int i = 0; i < a.size(); i++)
	{
		os << a[i] << " ";
	}
	os << "\n";
	return (os);
}

#endif