# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elise <elise@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 17:52:19 by elise             #+#    #+#              #
#    Updated: 2022/12/14 19:15:53 by elise            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Brain

SRC = main.cpp

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