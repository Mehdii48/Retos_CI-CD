CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic

# Programa principal
MAIN_SRC = main.c
MAIN_TARGET = programa

# Pruebas (NO incluye main.c)
TEST_SRC = test_challenge06.c
TEST_TARGET = test_challenge06

# Pipeline CI local
.PHONY: build test package clean all

all: build test package

# Paso 1: BUILD - Compilar el programa principal
build: $(MAIN_SRC) suma.c suma.h
	$(CC) $(CFLAGS) -o $(MAIN_TARGET) $(MAIN_SRC) suma.c
	@echo "✅ BUILD completado: $(MAIN_TARGET) generado"

# Paso 2: TEST - Ejecutar pruebas unitarias
test: $(TEST_SRC) suma.c suma.h
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_SRC) suma.c
	@echo "🧪 Ejecutando pruebas..."
	@if ./$(TEST_TARGET); then \
		echo "✅ TEST: Todas las pruebas pasaron"; \
	else \
		echo "❌ TEST: Algunas pruebas fallaron"; \
		exit 1; \
	fi

# Paso 3: PACKAGE - Preparar distribución
package: build
	@mkdir -p dist
	@cp $(MAIN_TARGET) dist/
	@cp README.md dist/ 2>/dev/null || true
	@echo "📦 PACKAGE: Binario empaquetado en dist/"
	@echo "   Archivos en dist/:"
	@ls -la dist/

# Limpieza
clean:
	@rm -f $(MAIN_TARGET) $(TEST_TARGET) *.o
	@rm -rf dist
	@echo "🧹 CLEAN: Archivos eliminados"

# Ayuda
help:
	@echo "Pipeline CI Local Simulado"
	@echo ""
	@echo "Comandos disponibles:"
	@echo "  make all     - Ejecuta todo: build → test → package"
	@echo "  make build   - Compila el programa principal"
	@echo "  make test    - Compila y ejecuta pruebas"
	@echo "  make package - Prepara distribución en carpeta dist/"
	@echo "  make clean   - Elimina archivos generados"
	@echo "  make help    - Muestra esta ayuda"