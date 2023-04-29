/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:55:49 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/21 16:05:55 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int	num;
		static const int b = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &f);
		Fixed &operator =(Fixed const &a);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif