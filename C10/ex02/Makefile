# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itham <itham@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 08:34:01 by itham             #+#    #+#              #
#    Updated: 2024/09/09 09:55:08 by itham            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=-I includes

# Collect all source files
SRCS=$(wildcard srcs/*.c)
# Generate object files from source files
OBJS=$(SRCS:srcs/%.c=%.o)

BIN=ft_tail

.PHONY: all clean fclean

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(OBJS) -o $@

%.o: srcs/%.c
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(BIN)

re: fclean all