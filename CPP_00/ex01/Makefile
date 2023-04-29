# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 18:47:43 by ecolin            #+#    #+#              #
#    Updated: 2022/12/16 13:58:58 by ecolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = PhoneBook

SRC = main.cpp PhoneBook.cpp

SOBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SOBJ)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean:
	/bin/rm -rf $(SOBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
