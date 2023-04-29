/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:42:48 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/12 18:08:35 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

A::~A(){}

B::~B(){}

C::~C(){}

Base *generate(void)
{
	Base	*g = NULL;
	srand(time(NULL));

	switch (rand() % 3)
	{
		case 0:
		std::cout << "Class type generated: A\n";
			return new A;
		break;
		case 1:
		std::cout << "Class type generated: B\n";
			return new B;
		break;
		case 2:
		std::cout << "Class type generated: C\n";
			return new C;
		break;
	default:
		break;
	}
	return g;
}
void identify(Base *p)
{
	Base *g =  NULL;
	g = dynamic_cast <A*>(p);
	if (g)
		std::cout << "class A";
	g = dynamic_cast <B*>(p);
	if (g)
		std::cout << "class B";
	g = dynamic_cast <C*>(p);
	if (g)
		std::cout << "class C";
	std::cout << "\n";
}
void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast <A&> (p);
		(void) a;
		std::cout << "class A";
	}
	catch(const std::exception& e)
	{
		(void) e;
	}
	try{
		B &b = dynamic_cast <B&> (p);
		(void) b;
		std::cout << "class B";
	}
	catch(const std::exception& e)
	{
		(void) e;
	}
	try{
		C &c = dynamic_cast <C&> (p);
		(void) c;
		std::cout << "class C";
	}
	catch(const std::exception& e)
	{
		(void) e;
	}
	
}