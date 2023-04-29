/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:04:35 by elise             #+#    #+#             */
/*   Updated: 2022/12/29 14:08:37 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	num;
		static const int b = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &f);
        Fixed   &operator =(Fixed const &a);
        Fixed   &operator ++(void);
        Fixed   operator ++(int);
        Fixed   &operator --(void);
        Fixed   operator --(int);
		Fixed   operator -(Fixed const &a);
		Fixed   operator +(Fixed const &a);
        Fixed   operator *(Fixed const &a);
        Fixed   operator /(Fixed const &a);
        int     operator >(Fixed const &a);
        int     operator <(Fixed const &a);
        int     operator <=(Fixed const &a);
        int     operator >=(Fixed const &a);
        int     operator==(Fixed const &a);
        int     operator!=(Fixed const &a);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
		void	setRawBits(int const raw);
        int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
};

 std::ostream& operator<<(std::ostream& os, Fixed const &a);

#endif