CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=calc

# Fuentes para el PROGRAMA PRINCIPAL
SRCS=main.c suma.c resta.c multiplicacion.c division.c
OBJS=$(SRCS:.c=.o)

# Fuentes para las PRUEBAS (SIN main.c)
TEST=test_challenge04
TEST_SRCS=suma.c resta.c multiplicacion.c division.c test_challenge04.c

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c calc.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

# REGLA IMPORTANTE: Tests NO usan main.c
test: $(TEST_SRCS) calc.h
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_SRCS)
	./$(TEST)

.PHONY: all clean fclean re test