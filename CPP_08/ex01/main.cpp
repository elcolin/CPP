/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:05:31 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/16 18:02:47 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
		std::cout << "\t\t____TESTING MAX NUMBER EXCEPTION____\n\n";
        std::cout << "Constructing a, size 4\n\n";
        Span a(4);
        for (int i = 0; i < 6; i++)
        {
            try{
                std::cout << "\t" << i + 1 << " attempt to add a number to a\n";
                a.addNumber(3);
                std::cout << "Success\n";
            }
            catch (std::exception &e)
            {
                std::cout << "\t/!\\ " << e.what();
            }
        }
    }
    {
		std::cout << "\t\t____TESTING ACCESSING TO SPAN OF EMPTY TAB EXCEPTION____\n\n";
		try{
			Span sp = Span();
        	std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "\t/!\\ " << e.what();
		}
    }
	{
		std::cout << "\n\t\t____REGULAR TEST____\n\n";
		Span a = Span(4);
		a.addNumber(12);
		a.addNumber(78);
		a.addNumber(106);
		a.addNumber(79);
		std::cout << a;
	}
	{
		std::cout << "\n\t\t____SUBJECT TEST____\n\n";
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
		std::cout << "\n\t\t____TEST WITH 10000 NUMBERS____\n\n";
        try{
            srand(time(NULL));
            std::vector <int> filler;
            for (int i = 0; i < 10000; i++)
                filler.push_back(rand() % 10000);
            Span a(10000);
			std::cout << "Filling a with range of iterator filler (random numbers)\n";
            a.addNumber(filler.begin(), filler.end());
			// std::cout << a; --> Uncomment to see every number in tab
			std::cout << "Shortest span: " << a.shortestSpan() << std::endl;
        	std::cout << "Longest span: " << a.longestSpan() << std::endl;
        }
        catch (std::exception const &e)
        {
            std::cout << e.what();
        }
    }
	{
		std::cout << "\n\t\t____CANONICAL FORM____\n\n";
		Span a(10);
		a.addNumber(12);
		a.addNumber(78);
		a.addNumber(106);
		std::cout << "\na: \n" << a;
		Span b(a);
		std::cout << "\nb: \n" << b;
		Span c;
		c = b;
		std::cout << "\nc: \n" << c;
	}
}