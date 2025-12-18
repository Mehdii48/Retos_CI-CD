#include <stdio.h>
#include "suma.h"

int main() {
    printf("=== MATRIX BUILD CHALLENGE 08 ===\n");
    printf("Sistema: ");
    
    #ifdef _WIN32
        printf("Windows\n");
    #elif __APPLE__
        printf("macOS\n");
    #elif __linux__
        printf("Linux\n");
    #else
        printf("Desconocido\n");
    #endif
    
    printf("Operaciones:\n");
    printf("  Suma: %d + %d = %d\n", 8, 4, suma(8, 4));
    printf("  Resta: %d - %d = %d\n", 8, 4, resta(8, 4));
    printf("  Multiplicación: %d * %d = %d\n", 8, 4, multiplicacion(8, 4));
    
    return 0;
}