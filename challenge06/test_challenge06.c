#include <stdio.h>
#include <assert.h>
#include "suma.h"

int main() {
    printf("🧪 Ejecutando pruebas unitarias...\n\n");
    
    // Prueba 1: Caso básico
    assert(suma(2, 3) == 5);
    printf("✅ suma(2, 3) == 5\n");
    
    // Prueba 2: Negativos
    assert(suma(-1, 1) == 0);
    printf("✅ suma(-1, 1) == 0\n");
    
    // Prueba 3: Valores grandes
    assert(suma(100, 200) == 300);
    printf("✅ suma(100, 200) == 300\n");
    
    // Prueba 4: Ceros
    assert(suma(0, 0) == 0);
    printf("✅ suma(0, 0) == 0\n");
    
    // Prueba 5: Doble negativo
    assert(suma(-5, -3) == -8);
    printf("✅ suma(-5, -3) == -8\n");
    
    // Prueba 6: Propiedad conmutativa
    assert(suma(7, 3) == suma(3, 7));
    printf("✅ Propiedad conmutativa: 7+3 == 3+7\n");
    
    printf("\n🎉 ¡TODAS LAS PRUEBAS PASARON!\n");
    return 0;
}