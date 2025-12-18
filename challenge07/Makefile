# Challenge 07 - Estructura simple
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Programa principal
PROGRAM = programa

# Pruebas
TEST = test_runner

.PHONY: all build test clean

all: build test

build: main.c suma.c suma.h
	@echo "🔨 Compilando programa..."
	$(CC) $(CFLAGS) -o $(PROGRAM) main.c suma.c
	@echo "✅ Programa: $(PROGRAM)"

test: test_challenge07.c suma.c suma.h
	@echo "🧪 Compilando pruebas..."
	$(CC) $(CFLAGS) -o $(TEST) test_challenge07.c suma.c
	@echo "✅ Ejecutando pruebas..."
	./$(TEST) || (echo "❌ Pruebas fallaron" && exit 1)

clean:
	rm -f $(PROGRAM) $(TEST)
	@echo "🧹 Limpiado"