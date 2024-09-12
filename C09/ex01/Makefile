# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itham <itham@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 08:14:17 by itham             #+#    #+#              #
#    Updated: 2024/09/09 16:37:13 by itham            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=CC
FLAGS=-Wall -Werror -Wextra -I./includes
AR=ar -crs
RM=rm -rf

FILES=srcs/ft_putchar srcs/ft_strcmp \
			srcs/ft_putstr srcs/ft_swap srcs/ft_strlen

# assigns to the variable SRC a list of filenames derived from the FILES variable, with each filename having .c
SRC=$(FILES:=.c) 
OBJ=$(FILES:=.o)
LIB=libft.a

# phony tells make the following are actually not files, rather just names
# for commands that should be execute when invoke
.PHONY: all clean fclean re

all: $(LIB) # depends on libft.a

 $(LIB) :$(OBJ)
	$(AR) $(LIB) $(OBJ)

%.o: %.c # pattern rule in make file syntax
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: fclean all