/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:44:51 by ecolin            #+#    #+#             */
/*   Updated: 2023/01/12 17:27:06 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
#include <stdint.h>

class Data{
	private:
		int i;
		std::string name;
	public:
		Data();
		Data(int i, std::string name);
		Data(Data const &a);
		Data &operator=(Data const &a);
		~Data();
		int getI();
		std::string getName();
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
std::ostream &operator<<(std::ostream &os, Data &a);

#endif