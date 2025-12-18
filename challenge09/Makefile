CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99
PROGRAM = programa
TEST = test_runner

.PHONY: all build test clean

all: build test

build: src/main.c src/suma.c src/suma.h
	$(CC) $(CFLAGS) -o $(PROGRAM) src/main.c src/suma.c
	@echo "Programa: $(PROGRAM)"

test: tests/test.c src/suma.c src/suma.h
	$(CC) $(CFLAGS) -o $(TEST) tests/test.c src/suma.c
	@echo "Ejecutando pruebas..."
	./$(TEST) || (echo "Pruebas fallaron" && exit 1)

clean:
	rm -f $(PROGRAM) $(TEST)
	@echo "Limpieza completada"