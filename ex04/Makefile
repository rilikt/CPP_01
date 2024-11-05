# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 10:42:21 by timschmi          #+#    #+#              #
#    Updated: 2024/11/05 10:43:02 by timschmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CC = g++

NAME = sed
CFLAGS = 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re