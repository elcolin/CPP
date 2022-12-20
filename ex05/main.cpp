/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:13:03 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/19 18:12:50 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl Karen;
    Karen.complain("DEBUG");
    Karen.complain("INFO");
    Karen.complain("WARNING");
    Karen.complain("ERROR");

    Karen.complain("info");
    Karen.complain("fnrjkenfrj");
    Karen.complain("ERRORI");

    Karen.complain("ERROR");
}