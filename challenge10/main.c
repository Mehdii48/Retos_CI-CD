#include <stdio.h>
#include "funciones.h"

int main() {
    printf("🚀 Aplicación Dockerizada en C\n");
    printf("===============================\n");
    printf("Operaciones:\n");
    printf("  • Suma: %d + %d = %d\n", 5, 3, suma(5, 3));
    printf("  • Resta: %d - %d = %d\n", 10, 4, resta(10, 4));
    printf("\n✅ Ejecutando dentro de Docker\n");
    return 0;
}