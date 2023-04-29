/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:04:18 by elise             #+#    #+#             */
/*   Updated: 2022/12/29 14:09:10 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/////////   CONSTRUCTEURS-DESTRUCTEUR    ///////////

Fixed::Fixed()
{
	this->num = 0;
}

Fixed::Fixed(Fixed const &f)
{
	*this = f;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int const i)
{
	this->num = i << this->b;
}

Fixed::Fixed(float const f)
{
	this->num = roundf(f * (1 << this->b));
}

/////////////////////////////////////

/////////   OPERATIONS    ///////////

Fixed &Fixed::operator =(Fixed const &a)
{
	this->num = a.getRawBits();
	return (*this);
}

Fixed &Fixed::operator ++(void)
{
	this->num++;
    return (*this);
}

Fixed Fixed::operator ++(int)
{
	Fixed a(*this);
    operator++();
    return (a);
}

Fixed &Fixed::operator --(void)
{
	this->num--;
    return (*this);
}

Fixed Fixed::operator --(int)
{
	Fixed a(*this);
    operator--();
    return (a);
}

Fixed Fixed::operator *(Fixed const &a)
{
    Fixed b(this->toFloat() * a.toFloat());
    return(b);
}

Fixed Fixed::operator /(Fixed const &a)
{
    Fixed b(this->toFloat() / a.toFloat());
    return(b);
}

Fixed Fixed::operator +(Fixed const &a)
{
    Fixed b(this->toFloat() + a.toFloat());
    return(b);
}

Fixed Fixed::operator -(Fixed const &a)
{
    Fixed b(this->toFloat() - a.toFloat());
    return(b);
}

//////////////////////////////////////////////////

/////////   OPERATEUR DE COMPARAISON   ///////////

int Fixed::operator==(Fixed const &a)
{
    if (this->getRawBits() == a.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator!=(Fixed const &a)
{
    if (this->getRawBits() == a.getRawBits())
        return (0);
    return (1);
}

int Fixed::operator>(Fixed const &a)
{
    if (*this == this->max(*this, a) && *this != a)
        return (1);
    return (0);
}

int Fixed::operator<(Fixed const &a)
{
    if (*this == this->min(*this, a) && *this != a)
        return (1);
    return (0);
}

int Fixed::operator>=(Fixed const &a)
{
    if (*this == this->max(*this, a) || *this == a)
        return (1);
    return (0);
}

int Fixed::operator<=(Fixed const &a)
{
    if (*this == this->min(*this, a) || *this == a)
        return (1);
    return (0);
}
//////////////////////////////////////////////

/////////   FONCTIONS PUBLIQUES    ///////////

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

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() <= b.toFloat())
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() >= b.toFloat())
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() >= b.toFloat())
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() <= b.toFloat())
        return (a);
    return (b);
}

////////////////////////////////////////////

/////////   OPERATEUR DE FLUX   ///////////

 std::ostream& operator<<(std::ostream& os, Fixed const &a)
{
	os << a.toFloat();
	return (os);
}