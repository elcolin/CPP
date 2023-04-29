# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 17:52:19 by elise             #+#    #+#              #
#    Updated: 2022/12/20 15:38:46 by ecolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = zombieHorde

SRC = main.cpp Zombie.cpp zombieHorde.cpp

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