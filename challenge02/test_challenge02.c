#include <stdio.h>
#include <assert.h>
#include "calculadora.h"

void ejecutar_pruebas() {
    printf("=== Ejecutando pruebas para Calculadora ===\n\n");
    
    // ===== PRUEBAS DE SUMA =====
    printf("--- Pruebas de Suma ---\n");
    assert(suma(5, 3) == 8);
    printf("✓ 5 + 3 = 8\n");
    
    assert(suma(-5, -3) == -8);
    printf("✓ (-5) + (-3) = -8\n");
    
    assert(suma(10, -4) == 6);
    printf("✓ 10 + (-4) = 6\n");
    
    assert(suma(0, 0) == 0);
    printf("✓ 0 + 0 = 0\n");
    printf("\n");
    
    // ===== PRUEBAS DE RESTA =====
    printf("--- Pruebas de Resta ---\n");
    assert(resta(10, 4) == 6);
    printf("✓ 10 - 4 = 6\n");
    
    assert(resta(-5, -3) == -2);
    printf("✓ (-5) - (-3) = -2\n");
    
    assert(resta(5, 10) == -5);
    printf("✓ 5 - 10 = -5\n");
    
    assert(resta(0, 5) == -5);
    printf("✓ 0 - 5 = -5\n");
    printf("\n");
    
    // ===== PRUEBAS DE MULTIPLICACIÓN =====
    printf("--- Pruebas de Multiplicación ---\n");
    assert(multiplicacion(5, 3) == 15);
    printf("✓ 5 * 3 = 15\n");
    
    assert(multiplicacion(-5, 3) == -15);
    printf("✓ (-5) * 3 = -15\n");
    
    assert(multiplicacion(-5, -3) == 15);
    printf("✓ (-5) * (-3) = 15\n");
    
    assert(multiplicacion(5, 0) == 0);
    printf("✓ 5 * 0 = 0\n");
    printf("\n");
    
    // ===== PRUEBAS DE DIVISIÓN =====
    printf("--- Pruebas de División ---\n");
    assert(division(15, 3) == 5);
    printf("✓ 15 / 3 = 5\n");
    
    assert(division(-15, 3) == -5);
    printf("✓ (-15) / 3 = -5\n");
    
    assert(division(15, -3) == -5);
    printf("✓ 15 / (-3) = -5\n");
    
    assert(division(-15, -3) == 5);
    printf("✓ (-15) / (-3) = 5\n");
    
    // División entre cero - debe retornar 0 según nuestra implementación
    assert(division(10, 0) == 0);
    printf("✓ 10 / 0 = 0 (manejo de error)\n");
    
    // División con resultado decimal (truncado en enteros)
    assert(division(7, 2) == 3);  // 3.5 truncado a 3
    printf("✓ 7 / 2 = 3 (truncado)\n");
    printf("\n");
    
    // ===== PRUEBAS COMBINADAS =====
    printf("--- Pruebas Combinadas ---\n");
    // (a + b) * c
    assert(multiplicacion(suma(2, 3), 4) == 20);
    printf("✓ (2 + 3) * 4 = 20\n");
    
    // (a - b) / c
    assert(division(resta(10, 2), 2) == 4);
    printf("✓ (10 - 2) / 2 = 4\n");
    
    printf("\n");
    printf("=== TODAS LAS PRUEBAS PASARON EXITOSAMENTE ===\n");
    printf("Total: 20 pruebas ejecutadas\n");
}

int main() {
    ejecutar_pruebas();
    return 0;
}