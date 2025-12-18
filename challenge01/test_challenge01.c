#include <stdio.h>
#include <assert.h>
#include "suma.h"

void ejecutar_pruebas() {
    printf("=== Ejecutando pruebas para suma() ===\n");
    
    // Prueba 1: Suma de dos positivos
    printf("Prueba 1: 5 + 3 = %d\n", suma(5, 3));
    assert(suma(5, 3) == 8);
    printf("✓ Prueba 1 pasada\n\n");
    
    // Prueba 2: Suma de positivo y negativo
    printf("Prueba 2: 10 + (-4) = %d\n", suma(10, -4));
    assert(suma(10, -4) == 6);
    printf("✓ Prueba 2 pasada\n\n");
    
    // Prueba 3: Suma de dos negativos
    printf("Prueba 3: (-7) + (-3) = %d\n", suma(-7, -3));
    assert(suma(-7, -3) == -10);
    printf("✓ Prueba 3 pasada\n\n");
    
    // Prueba 4: Suma con cero
    printf("Prueba 4: 0 + 15 = %d\n", suma(0, 15));
    assert(suma(0, 15) == 15);
    printf("✓ Prueba 4 pasada\n\n");
    
    // Prueba 5: Suma con valores grandes
    printf("Prueba 5: 1000 + 2000 = %d\n", suma(1000, 2000));
    assert(suma(1000, 2000) == 3000);
    printf("✓ Prueba 5 pasada\n\n");
    
    // Prueba 6: Suma simétrica
    printf("Prueba 6: (-a) + a = 0\n");
    assert(suma(-5, 5) == 0);
    printf("✓ Prueba 6 pasada\n\n");
    
    printf("=== Todas las pruebas pasaron exitosamente ===\n");
}

int main() {
    ejecutar_pruebas();
    return 0;
}