#include "calculadora.h"
#include <stdio.h>  // Para printf en caso de error

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    // Validación: división entre cero
    if (b == 0) {
        printf("Error: División entre cero\n");
        return 0;  // Podrías retornar 0 o algún código de error
    }
    return a / b;
}