#include <stdio.h>
#include <assert.h>
#include "suma.h"

int main() {
    printf("=== PRUEBAS CHALLENGE 07 ===\n");
    
    assert(suma(2, 3) == 5);
    printf("✅ 2 + 3 = 5\n");
    
    assert(suma(-1, 1) == 0);
    printf("✅ -1 + 1 = 0\n");
    
    assert(suma(0, 0) == 0);
    printf("✅ 0 + 0 = 0\n");
    
    assert(suma(100, 200) == 300);
    printf("✅ 100 + 200 = 300\n");
    
    printf("\n🎉 ¡TODAS LAS PRUEBAS PASAN!\n");
    return 0;
}