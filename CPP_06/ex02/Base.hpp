/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:42:52 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/12 17:45:16 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base{

	public:
		virtual ~Base();

};

class A : public Base
{
	public:
		~A();
};

class B : public Base
{
	public:
		~B();
};

class C : public Base
{
	public:
		~C();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif