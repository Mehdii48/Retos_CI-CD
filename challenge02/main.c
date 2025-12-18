#include <stdio.h>
#include "calculadora.h"

int main() {
    printf("=== Calculadora Simple ===\n");
    
    // Ejemplos de uso
    printf("Suma: 5 + 3 = %d\n", suma(5, 3));
    printf("Resta: 10 - 4 = %d\n", resta(10, 4));
    printf("Multiplicación: 6 * 7 = %d\n", multiplicacion(6, 7));
    
    // División normal
    printf("División: 15 / 3 = %d\n", division(15, 3));
    
    // División entre cero (manejo de error)
    printf("División entre cero: 10 / 0 = %d\n", division(10, 0));
    
    return 0;
}