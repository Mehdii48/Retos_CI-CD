#!/bin/bash

# Configuración
CC="gcc"
CFLAGS="-Wall -Wextra -Werror -pedantic"
TARGET="test_challenge05"
SOURCES="suma.c test_challenge05.c"  # ¡NO main.c!

echo "🔧 Compilando tests..."

# Compilar
$CC $CFLAGS -o $TARGET $SOURCES 2>/dev/null

if [ $? -ne 0 ]; then
    echo -e "❌ \033[0;31mCOMPILACIÓN FALLIDA\033[0m"
    echo "Intentando compilar con mensajes de error:"
    $CC $CFLAGS -o $TARGET $SOURCES
    exit 1
fi

echo "✅ Compilación exitosa"
echo "🧪 Ejecutando pruebas..."

if ./$TARGET; then
    echo -e "🎉 \033[0;32mTODAS LAS PRUEBAS PASARON\033[0m"
    EXIT_CODE=0
else
    echo -e "💥 \033[0;31mALGUNAS PRUEBAS FALLARON\033[0m"
    EXIT_CODE=1
fi

exit $EXIT_CODE