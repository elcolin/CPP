/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:04:38 by elise             #+#    #+#             */
/*   Updated: 2022/12/29 14:14:38 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void op_if(Fixed a, std::string op, Fixed b, int i)
{
	std::cout << a << op << b << " ?" << std::endl;
    if (i)
        std::cout << "Oui" << std::endl;
    else
        std::cout << "Non" << std::endl;
}

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(a);
	std::cout << "\nSoustraction de " << a << " par " << b << " = " << ((Fixed)a - b) << std::endl;
	std::cout << "Addition de " << b << " par " << b << " = " << ((Fixed)b + b) << std::endl;
    std::cout << "Division de " << b << " par " << a << " = " << ((Fixed)b / a) << std::endl;
	std::cout << "Multiplication de " << b << " par " << b << " = " << ((Fixed)b * b) << "\n" << std::endl;
    op_if(a, " > ", b, a > b);
    op_if(a, " < ", b, a < b);
	op_if(a, " > ", c, a > c);
    op_if(a, " >= ", b, a >= b);
    op_if(a, " <= ", c, a <= c);
    op_if(a, " >= ", c, a >= c);
    op_if(a, " == ", c, a == c);
    op_if(a, " == ", b, a == b);
    op_if(a, " != ", c, a != c);
    op_if(a, " != ", b, a != b);
    return 0;
}