/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:50:53 by elise             #+#    #+#             */
/*   Updated: 2023/01/12 18:40:49 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
    throw(ErrorString());
}

Convert::~Convert()
{
    
}

Convert &Convert::operator=(Convert const &a)
{
	this->c = a.c;
	i = a.i;
	f = a.f;
	d = a.d;
	s = a.s;
	err = a.err;
	return (*this);
}

Convert::Convert(Convert const &a)
{
	*this = a;
}

Convert::Convert(std::string *s) : s(s), i(0), f(0), d(0), c(0), err(0)
{
    if (s[0] == "\0" || *s == " ")
	{
        throw(ErrorString());
	}
	if (!allNum())
		err = 2;
	this->toFloat();
	this->toDouble();
	this->toInt();
	if (s->length() == 1 && !i)
		i = static_cast <int> (s->c_str()[0]);
	this->toChar();
}
bool Convert::allNum()
{
	unsigned int i = 0;
	while(s->c_str()[i] && s->length() > 1)
	{
		if(s->c_str()[i] == '+' || (s->c_str()[i] == '-' && i))
			return false;
		if (isalpha(s->c_str()[i]) && !(i == s->length() - 1 && s->c_str()[i] == 'f'))
			return (false);
		if (s->c_str()[i] == ' ')
			throw(ErrorString());
		i++;
	}
	return (true);
}
void Convert::toInt()
{
	this->i = atoi(s->c_str());
}
void Convert::toChar()
{
	this->c = static_cast <char> (this->i);
}
void Convert::toFloat()
{
	this->f = std::strtof(this->s->c_str(), 0);
	if (std::isinf(this->f))
	{
		if (s->c_str()[0] == '-')
			err = -1;
		else
			err = 1;
	}
}

void Convert::toDouble()
{
	this->d = std::strtod(this->s->c_str(), 0);
}

float Convert::getFloat()
{
	if (err == 1)
		throw(ErrorPosInf());
	if (err == -1)
		throw(ErrorNegInf());
	if (err == 2)
		throw(Nan());
	return (this->f);
}

int Convert::getInt()
{
	if (err)
		throw(Impossible());
	return (this->i);
}

double Convert::getDouble()
{
	if (err == 1)
		throw(ErrorPosInf());
	if (err == -1)
		throw(ErrorNegInf());
	if (err == 2)
		throw(Nan());
	return (this->d);
}

char Convert::getChar()
{
	if ((err || i < 0 || (!i && this->f)))
		throw(Impossible());
	if (!isprint(this->c))
		throw(ErrorChar());
	return (this->c);
}

std::ostream &operator<<(std::ostream &os, Convert &a)
{
	std::string types[4] = {"char: ", "int: ", "float: ", "double: "};
	for (int i = 0; i < 4; i++)
	{
		os << types[i];
		try{
			if (types[i] == "char: ")
			{
				a.getChar();
				os << "\'" << a.getChar() << "\'";
			}
			else if (types[i] == "int: ")
			{
				a.getInt();
				if (a.getFloat() > (float) INT_MAX || a.getFloat() < (float) INT_MIN)
					throw(Impossible());
				os << a.getInt();
			}
			else if(types[i] == "float: ")
			{
				if (a.getFloat() == a.getInt() || !a.getFloat())
					os << static_cast <float> (a.getInt()) << ".0";
				else
					os << a.getFloat();
			}
			else if (types[i] == "float: " || types[i] == "double: ")
			{
				if (a.getDouble() == a.getInt() || !a.getDouble())
					os << static_cast <double> (a.getInt()) << ".0";
				else
					os << a.getDouble();
			}
		}
		catch(std::exception const &e)
		{
			os << e.what();
		}
		if (types[i] == "float: ")
					os << "f";
		os << "\n";
	}
	return os;
}

// void *(Convert::*func[4])() = {&Convert::getChar, &Convert::getInt, &Convert::getFloat, &Convert::getDouble};