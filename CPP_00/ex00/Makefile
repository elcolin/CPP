# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecolin <ecolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 18:47:43 by ecolin            #+#    #+#              #
#    Updated: 2022/12/16 14:52:08 by ecolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = megaphone

SRC = megaphone.cpp

SOBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SOBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	/bin/rm -rf $(SOBJ)

fclean: clean
	/bin/rm -rf megaphone

re: fclean all
