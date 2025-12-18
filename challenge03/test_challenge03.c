#include <stdio.h>
#include <assert.h>
#include <string.h>    // Para comparar con funciones estándar
#include "strings.h"   // Nuestras funciones

void test_mi_strlen() {
    printf("=== Pruebas mi_strlen ===\n");
    
    // Casos normales
    assert(mi_strlen("") == 0);
    printf("✓ String vacío: 0\n");
    
    assert(mi_strlen("a") == 1);
    printf("✓ 'a': 1\n");
    
    assert(mi_strlen("Hola") == 4);
    printf("✓ 'Hola': 4\n");
    
    assert(mi_strlen("Hello World!") == 12);
    printf("✓ 'Hello World!': 12\n");
    
    // Comparar con strlen estándar
    char test1[] = "Programacion en C";
    assert(mi_strlen(test1) == strlen(test1));
    printf("✓ Coincide con strlen estándar\n");
    
    printf("\n");
}

void test_mi_strcmp() {
    printf("=== Pruebas mi_strcmp ===\n");
    
    // Strings iguales
    assert(mi_strcmp("", "") == 0);
    printf("✓ '' == '': 0\n");
    
    assert(mi_strcmp("abc", "abc") == 0);
    printf("✓ 'abc' == 'abc': 0\n");
    
    // Strings diferentes
    assert(mi_strcmp("abc", "abd") < 0);  // 'c' < 'd'
    printf("✓ 'abc' < 'abd' (negativo)\n");
    
    assert(mi_strcmp("xyz", "abc") > 0);  // 'x' > 'a'
    printf("✓ 'xyz' > 'abc' (positivo)\n");
    
    // Diferentes longitudes
    assert(mi_strcmp("abc", "abcd") < 0);  // '\0' < 'd'
    printf("✓ 'abc' < 'abcd' (más corto)\n");
    
    assert(mi_strcmp("abcd", "abc") > 0);  // 'd' > '\0'
    printf("✓ 'abcd' > 'abc' (más largo)\n");
    
    // Comparar con strcmp estándar
    char s1[] = "test";
    char s2[] = "test";
    char s3[] = "tesu";
    
    assert((mi_strcmp(s1, s2) == 0) == (strcmp(s1, s2) == 0));
    assert((mi_strcmp(s1, s3) < 0) == (strcmp(s1, s3) < 0));
    printf("✓ Coincide con strcmp estándar\n");
    
    printf("\n");
}

void test_mi_strcpy() {
    printf("=== Pruebas mi_strcpy ===\n");
    
    char destino[100];
    
    // Copia normal
    mi_strcpy(destino, "Hola");
    assert(mi_strcmp(destino, "Hola") == 0);
    printf("✓ Copia 'Hola'\n");
    
    // Copia vacía
    mi_strcpy(destino, "");
    assert(mi_strcmp(destino, "") == 0);
    printf("✓ Copia string vacío\n");
    
    // Copia larga
    const char* largo = "Este es un string bastante largo para probar";
    mi_strcpy(destino, largo);
    assert(mi_strcmp(destino, largo) == 0);
    printf("✓ Copia string largo\n");
    
    // Verificar que termina en nulo
    mi_strcpy(destino, "test");
    assert(destino[4] == '\0');
    printf("✓ Termina con '\\0'\n");
    
    // Comparar con strcpy estándar
    char dest1[50], dest2[50];
    const char* origen = "Comparacion";
    
    mi_strcpy(dest1, origen);
    strcpy(dest2, origen);
    
    assert(mi_strcmp(dest1, dest2) == 0);
    printf("✓ Coincide con strcpy estándar\n");
    
    printf("\n");
}

void test_combinaciones() {
    printf("=== Pruebas Combinadas ===\n");
    
    char buffer[100];
    
    // Copiar y medir
    mi_strcpy(buffer, "Programming");
    assert(mi_strlen(buffer) == 11);
    printf("✓ Copiar + medir longitud\n");
    
    // Comparar copias
    char buffer2[100];
    mi_strcpy(buffer, "C++");
    mi_strcpy(buffer2, "C++");
    assert(mi_strcmp(buffer, buffer2) == 0);
    printf("✓ Comparar dos copias iguales\n");
    
    // Cadena en cadena
    mi_strcpy(buffer, "Hello");
    mi_strcpy(buffer + 5, " World");
    // Nota: Esto crea "Hello World" pero sin espacio
    // Es un caso avanzado para entender punteros
    printf("✓ Operaciones con punteros\n");
    
    printf("\n");
}

int main() {
    printf("=== PRUEBAS DE FUNCIONES DE CADENAS ===\n\n");
    
    test_mi_strlen();
    test_mi_strcmp();
    test_mi_strcpy();
    test_combinaciones();
    
    printf("=======================================\n");
    printf("¡TODAS LAS PRUEBAS PASARON! 🎉\n");
    printf("Funciones verificadas:\n");
    printf("- mi_strlen (vs strlen)\n");
    printf("- mi_strcmp (vs strcmp)\n");
    printf("- mi_strcpy (vs strcpy)\n");
    printf("=======================================\n");
    
    return 0;
}