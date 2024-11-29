# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 14:42:20 by timschmi          #+#    #+#              #
#    Updated: 2024/11/29 13:02:51 by timschmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++

NAME = violence
CFLAGS = -std=c++17 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
