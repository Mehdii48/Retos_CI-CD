# Challenge 10 - Docker
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99
APP = app
TEST = test_app

.PHONY: all build test clean

all: build test

# Programa principal
build: main.c funciones.c funciones.h
	@echo "🔨 Compilando aplicación..."
	$(CC) $(CFLAGS) -o $(APP) main.c funciones.c
	@echo "✅ Aplicación: $(APP)"

# Pruebas (su propio main)
test: tests.c funciones.c funciones.h
	@echo "🧪 Compilando pruebas..."
	$(CC) $(CFLAGS) -o $(TEST) tests.c funciones.c
	@echo "✅ Ejecutando pruebas..."
	./$(TEST) || (echo "❌ Pruebas fallaron" && exit 1)

clean:
	rm -f $(APP) $(TEST)
	@echo "🧹 Limpiado"