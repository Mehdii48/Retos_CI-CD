#include <stdio.h>
#include <assert.h>
#include "suma.h"

void run_tests() {
    printf("=== Ejecutando pruebas ===\n");
    
    assert(suma(2, 3) == 5);
    printf("✅ suma(2, 3) == 5\n");
    
    assert(suma(-5, 10) == 5);
    printf("✅ suma(-5, 10) == 5\n");
    
    assert(suma(0, 0) == 0);
    printf("✅ suma(0, 0) == 0\n");
    
    assert(suma(-3, -2) == -5);
    printf("✅ suma(-3, -2) == -5\n");
    
    printf("\n🎉 ¡Todas las pruebas pasaron!\n");
}

int main() {
    run_tests();
    return 0;
}