#include <stdio.h>
#include <assert.h>
#include "suma.h"

int main() {
    printf("🧪 PRUEBAS MATRIX - ");
    
    // Detectar sistema
    #ifdef _WIN32
        printf("Windows\n");
    #elif __APPLE__
        printf("macOS\n");
    #elif __linux__
        printf("Linux\n");
    #else
        printf("Sistema desconocido\n");
    #endif
    
    printf("====================\n");
    
    // Pruebas básicas
    assert(suma(2, 3) == 5);
    printf("✅ suma(2, 3) = 5\n");
    
    assert(resta(10, 4) == 6);
    printf("✅ resta(10, 4) = 6\n");
    
    assert(multiplicacion(3, 4) == 12);
    printf("✅ multiplicacion(3, 4) = 12\n");
    
    // Pruebas con negativos
    assert(suma(-5, 5) == 0);
    printf("✅ suma(-5, 5) = 0\n");
    
    assert(resta(0, 5) == -5);
    printf("✅ resta(0, 5) = -5\n");
    
    printf("\n🎉 ¡TODAS LAS PRUEBAS PASAN EN ESTE SISTEMA!\n");
    return 0;
}