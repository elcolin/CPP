/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:13:31 by elise             #+#    #+#             */
/*   Updated: 2023/01/12 15:14:54 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int argc, char *argv[])
{
    try{
        if (argc > 2 || argc < 2)
            throw(ErrorString());
        std::string s = argv[1];
        Convert test(&s);
		std::cout << test;
    }
    catch (std::exception const &e)
    {
        std::cout << e.what();
    }
}