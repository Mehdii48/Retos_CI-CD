#include "strings.h"

// 1. mi_strlen: Cuenta caracteres hasta encontrar '\0'
size_t mi_strlen(const char *s) {
    size_t longitud = 0;
    
    // Mientras no lleguemos al carácter nulo
    while (s[longitud] != '\0') {
        longitud++;
    }
    
    return longitud;
}

// 2. mi_strcmp: Compara dos strings carácter por carácter
int mi_strcmp(const char *s1, const char *s2) {
    // Recorremos ambos strings simultáneamente
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            // Diferencia encontrada
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }
    
    // Al salir, uno o ambos terminaron
    // Si ambos terminaron a la vez, son iguales (diferencia 0)
    // Si uno terminó antes, ese es "menor"
    return (*s1 - *s2);
}

// 3. mi_strcpy: Copia src en dest
char *mi_strcpy(char *dest, const char *src) {
    // Guardamos el inicio para retornarlo
    char *inicio = dest;
    
    // Copiamos carácter por carácter
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    // No olvidar el carácter nulo final
    *dest = '\0';
    
    return inicio;
}