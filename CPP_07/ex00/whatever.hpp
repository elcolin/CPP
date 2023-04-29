/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:49:59 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/14 12:11:23 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

class Random //CLASS SERVANT D'EXEMPLE -> NON REQUISE DANS L'EXERCICE
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
void swap(T &a, T &b)
{
	T c;
	 
	c = a;
	a = b;
	b = c;
}

template <typename T>
T &min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif