# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math <math@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 18:22:45 by math42            #+#    #+#              #
#    Updated: 2024/06/18 12:11:49 by math             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and types
type		= ex
SRCSDIR		= .
INCLUDES	= .

SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

# Compiler options
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(type)

$(type): $(SRCSDIR)/$(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(type)

re: fclean all

test: $(type)
	./$(type)

.PHONY: all clean fclean re test

