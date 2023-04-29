/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:04:00 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/14 13:51:06 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int main()
{
	{

		std::cout << "\t\t____CONSTRUCTOR, COPY, ASSIGMENT OPERATOR____" << "\n\n";
		std::cout << "\t---Creating int array one with size 10---\n\n";
		Array<int> one(10);
		for (unsigned int i = 0; i < 10; i++)
		{
			one[i] = i + 1;
		}
		std::cout << "one's data: " << one << "one's size: " << one.size() << "\n";
		std::cout << "\n\t---Creating int array two with empty constructor---\n\n";
		Array<int> two;
		std::cout << "two's data: " << two << "two's size: " << two.size() << "\n";
		std::cout << "\n\t---Assigning one to two---\n\n";
		two = one;
		std::cout << "\n\t(Assigning new data to one to show deep copy)\n\n";
		one = Array<int> (5);
		for (unsigned int i = 0; i < one.size(); i++)
		{
			one[i] = one.size() - i;
		}
		std::cout << "one's data: " << one << "one's size: " << one.size() << "\n\n";
		std::cout << "two's data: " << two << "two's size: " << two.size() << "\n";
		std::cout << "\n\t---Copy constructor based on one---\n\n";
		Array <int> three(one);
		std::cout << "\n\t(Assigning new data to one to show deep copy)\n\n";
		one = Array<int> ();
		std::cout << "\nthree's data: " << three << "three's size: " << three.size() << "\n";
	}
	{
		std::cout << "\t\t____EXCEPTION TESTS____" << "\n\n";
		Array<int> one(10);
		for (unsigned int i = 0; i < 10; i++)
		{
			one[i] = i + 1;
		}
		std::cout << "one's data: " << one << "one's size: " << one.size() << "\n";
		try{
			std::cout << "\n\t---Accesing array one with -1---\n\n";
			std::cout << one[-1];
		}
		catch(std::exception &e)
		{
			std::cout << e.what();
		}
		try{
			std::cout << "\n\t---Accesing array one with 11---\n\n";
			std::cout << one[11];
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
}

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }