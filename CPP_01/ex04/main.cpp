/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:51:24 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/20 17:19:27 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	copy_to_file(std::string text, std::string file_name)
{
	file_name.append(".replace");
	std::ofstream replace_file(file_name.c_str(), std::ios::trunc);
	if (replace_file.is_open())
	{
		replace_file << text;
		replace_file.close();
	}
}

std::string	read_file(std::string file_name)
{
	std::string tmp;
	std::string txt;
	std::ifstream file(file_name.c_str());
	
	if (file.is_open())
	{
		while(getline(file, tmp))
			txt.append(tmp);
		file.close();
	}
	else std::cout << "Unable to open file";
	return (txt);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);	
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string	txt;
	size_t pos = 0;

	txt = read_file(argv[1]);
	while ((pos = txt.find(s1)) != txt.npos && s1[0])
	{
		txt.erase(pos, s1.size());
		txt.insert(pos, s2);
	}
	copy_to_file(txt, argv[1]);
}