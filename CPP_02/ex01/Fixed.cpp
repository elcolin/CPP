/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:55:53 by ecolin            #+#    #+#             */
/*   Updated: 2022/12/29 13:44:18 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->num = i << this->b;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(f * (1 << this->b));
}

Fixed &Fixed::operator =(Fixed const &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = a.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->num);
}

void	Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->getRawBits() / (float) (1 << this->b));
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->b);
}

 std::ostream& operator<<(std::ostream& os, Fixed const &a)
 {
	os << a.toFloat();
	return (os);
 }