/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:50:36 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/14 12:09:04 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	{
		int a = 12;
		int b = 33;
		std::cout << "\t\t___INT___\n\n";
		std::cout << "int a: " << a << "\tint b: " << b << "\n\n\t--swap(a, b)--\n";
		swap(a, b);
		std::cout << "a: " << a << "\t\tb: " << b << "\n\n";
		std::cout << "\t--min(a, b)--\n";
		std::cout << min(a, b) << "\n";
		std::cout << "\t--max(a, b)--\n";
		std::cout << max(a, b) << "\n";
	}
	{
		std::cout << "\n\t\t___FLOAT___\n\n";
		float a = 1.5;
		float b = 89.8;
		std::cout << "float a: " << a << "\tfloat b: " << b << "\n\t--swap(a, b)--\n";
		swap(a, b);
		std::cout << "a: " << a << "\t\tb: " << b << "\n";
		std::cout << "\t--min(a, b)--\n";
		std::cout << min(a, b) << "\n";
		std::cout << "\t--max(a, b)--\n";
		std::cout << max(a, b) << "\n";
	}
	{
		std::cout << "\n\t\t___CLASS___\n\n";
		Random a(-6, "a");
		Random b(15, "b");
		std::cout << "Random a: " << a << "\nRandom b: " << b << "\n\t--swap(a, b)--\n";
		swap(a, b);
		std::cout << "a: " << a << "b: " << b << "\n";
		std::cout << "\t--min(a, b)--\n";
		std::cout << min(a, b) << "\n";
		std::cout << "\t--max(a, b)--\n";
		std::cout << max(a, b) << "\n";
	}
	return  0;
}

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }