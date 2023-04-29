# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 16:51:49 by ecolin            #+#    #+#              #
#    Updated: 2023/01/06 16:26:20 by ecolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = Animal

SRC = Animal.cpp main.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) $< -c

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)
	
fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all