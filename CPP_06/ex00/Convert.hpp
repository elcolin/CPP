/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:45:31 by elise             #+#    #+#             */
/*   Updated: 2023/01/12 15:45:04 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cctype>

class Convert{

    private:
        std::string const *s;
        int i;
        float f;
        double d;
        char c;
		int err;
    public:
        Convert();
        ~Convert();
        Convert &operator=(Convert const &a);
        Convert(Convert const &a);
        Convert(std::string *s);
        void toInt();
        void toChar();
        void toFloat();
        void toDouble();
		int	getInt();
		float getFloat();
		char getChar();
		double getDouble();
		bool	allNum();
        class ErrorChar : public std::exception {
            public:
                const char *what() const throw()
                {
                    return ("Non displayable");
                }
        };
		class ErrorPosInf : public std::exception {
            public:
                const char *what() const throw()
                {
                    return ("+inf");
                }
        };
		class ErrorNegInf : public std::exception {
            public:
                const char *what() const throw()
                {
                    return ("-inf");
                }
        };
		class Nan : public std::exception {
            public:
                const char *what() const throw()
                {
                    return ("nan");
                }
        };
};

class ErrorString : public std::exception {
    public:
        const char *what() const throw()
        {
            return ("Error occurred, Please try again.\n");
        }
};
class Impossible : public std::exception {
    public:
        const char *what() const throw()
        {
            return ("impossible");
        }
};

std::ostream &operator<<(std::ostream &os, Convert &a);

#endif