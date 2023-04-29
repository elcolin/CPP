/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:55:49 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/21 17:34:20 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int	num;
		static const int b = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &f);
		Fixed &operator =(Fixed const &a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

 std::ostream& operator<<(std::ostream& os, Fixed const &a);

#endif