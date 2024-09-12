# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itham <itham@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 07:45:30 by itham             #+#    #+#              #
#    Updated: 2024/09/05 08:21:31 by itham            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=-I includes

# Collect all source files
SRCS=$(wildcard srcs/*.c)
# Generate object files from source files
OBJS=$(SRCS:srcs/%.c=%.o)

BIN=ft_display_file

.PHONY: all clean fclean

all: $(BIN)

# Rule to link object files into the final executable
$(BIN): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(OBJS) -o $@

# Rule to compile .c files into .o files
%.o: srcs/%.c
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)
