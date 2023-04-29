/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:05:46 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/16 18:01:50 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {
    std::cout << "Empty Span constructor called\n";
}

Span::Span(unsigned int N) : N(N)
{
    std::cout << "Span constructor called\n";
}

Span::Span(Span const &a) : N(a.N), tab(a.tab)
{
    std::cout << "Span copy constructor called\n";
}

Span &Span::operator=(Span const &a){

	std::cout << "Assignment operator called\n";
    this->N = a.N;
    this->tab = a.tab;
    return (*this);
}

void Span::addNumber(int i)
{
	if (tab.size() < N)
		tab.push_back(i);
	else
		throw(MaxNumber());
}

void Span::addNumber(std::vector <int> ::iterator first, std::vector <int> ::iterator last)
{
    if (last - first + this->tab.size() > N)
        throw(MaxNumber());
    tab.insert(tab.end(), first, last);
}

unsigned int Span::longestSpan()
{
	if (!tab.size() || tab.size() == 1)
		throw(NoDistance());
    return (*std::max_element(tab.begin(), tab.end()) - *std::min_element(tab.begin(), tab.end()));
}

unsigned int Span::shortestSpan()
{
    unsigned int min = longestSpan();
    for (std::vector <int> ::iterator it = tab.begin(); it != tab.end(); it++)
    {
        for(std::vector <int> ::iterator jt = tab.begin(); jt != tab.end(); jt++)
        {
            if (*it > *jt && static_cast <unsigned int> (*it - *jt) < min)
                min = *it - *jt;
        }
    }
    return (min);
}

std::ostream &operator<<(std::ostream &os, Span &a)
{
	for (unsigned int i = 0; i < a.current_size(); i++)
		os << "tab[" << i << "]: " << a[i] << "\n";
	os << "\nShortest Span: " << a.shortestSpan() << "\n";
	os << "Longest Span: " << a.longestSpan() << "\n\n";
	return (os);
}