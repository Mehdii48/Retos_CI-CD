#include <stdio.h>
#include <assert.h>
#include "../src/suma.h"

int main() {
    printf("🧪 PRUEBAS CHALLENGE 09\n");
    printf("=======================\n");
    
    // Pruebas de suma
    assert(suma(2, 3) == 5);
    printf("✅ suma(2, 3) = 5\n");
    
    assert(suma(-1, 1) == 0);
    printf("✅ suma(-1, 1) = 0\n");
    
    assert(suma(0, 0) == 0);
    printf("✅ suma(0, 0) = 0\n");
    
    // Pruebas de multiplicación
    assert(multiplica(3, 4) == 12);
    printf("✅ multiplica(3, 4) = 12\n");
    
    assert(multiplica(-2, 3) == -6);
    printf("✅ multiplica(-2, 3) = -6\n");
    
    printf("\n🎉 ¡TODAS LAS PRUEBAS PASAN!\n");
    printf("✅ Badge se actualizará automáticamente\n");
    
    return 0;
}