/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:15:05 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/14 12:19:19 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

class Random
{
	private:
		int i;
		std::string name;
	public:
		Random(): i(0), name("Default"){};
		Random(int i, std::string name) : i(i), name(name){};
		Random &operator=(Random const &a){
			this->i = a.i;
			this->name = a.name;
			return (*this);
		}
		bool operator>(Random const &a){
			if (this->i > a.getInt())
				return true;
			return false;
		}
		bool operator<(Random const &a){
			if (this->i < a.getInt())
				return true;
			return false;
		}
		Random &operator+(int i){
			this->i += i;
			return (*this);
		}
		Random(Random const &a){
			*this = a;}
		~Random(){};
		std::string getName(){
			return name;
		}
		int	getInt() const{
			return i;
		}
};

std::ostream &operator<<(std::ostream &os, Random &a)
{
	os << "Name: " << a.getName() << "\tInt: " << a.getInt() << "\n";
	return (os);
}

template <typename T>
void iter(T *tab, int size, void (*f)(T))
{
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T>
void print(T i)
{
	std::cout << " "<< i ;
}

template <typename T>
void add(T i)
{
	i = i + 1;
	print(i);
}

#endif