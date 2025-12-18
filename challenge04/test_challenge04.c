#include <stdio.h>
#include <assert.h>
#include "calc.h"

int main() {
    printf("=== Pruebas Calculadora Modular ===\n");
    
    assert(suma(5, 3) == 8);
    printf("✓ suma(5, 3) = 8\n");
    
    assert(resta(10, 4) == 6);
    printf("✓ resta(10, 4) = 6\n");
    
    assert(multiplicacion(6, 7) == 42);
    printf("✓ multiplicacion(6, 7) = 42\n");
    
    assert(division(15, 3) == 5);
    printf("✓ division(15, 3) = 5\n");
    
    assert(division(10, 0) == 0);
    printf("✓ division(10, 0) = 0 (manejo error)\n");
    
    printf("\n TODAS LAS PRUEBAS PASARON\n");
    return 0;
}