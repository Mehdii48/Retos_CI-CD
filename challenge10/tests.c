#include <stdio.h>
#include <assert.h>
#include "funciones.h"

int main() {
    printf("🧪 Pruebas Docker Challenge 10\n");
    printf("==============================\n");
    
    assert(suma(2, 3) == 5);
    printf("✅ suma(2, 3) = 5\n");
    
    assert(suma(-1, 1) == 0);
    printf("✅ suma(-1, 1) = 0\n");
    
    assert(resta(10, 4) == 6);
    printf("✅ resta(10, 4) = 6\n");
    
    assert(resta(5, 10) == -5);
    printf("✅ resta(5, 10) = -5\n");
    
    printf("\n🎉 ¡Todas las pruebas pasan en Docker!\n");
    return 0;
}