# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 14:50:38 by ecolin            #+#    #+#              #
#    Updated: 2023/01/16 15:29:30 by ecolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX= c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = a.out

SRC = main.cpp

DEPS = MutantStack.hpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all