CC=cc
FLAGS=-Wall -Werror -Wextra
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:srcs/%.c=%.o)
BIN=do-op

.PHONY: all fclean clean re

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: srcs/%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)

re: fclean all