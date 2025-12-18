#include <stdio.h>

// Declaración
int suma(int a, int b);

// Implementación simple
int suma(int a, int b) {
    return a + b;
}

int main() {
    printf("Programa listo para testear con script.\n");
    printf("Prueba suma: %d + %d = %d\n", 5, 3, suma(5, 3));
    return 0;
}