#include <stdio.h>
#include <string.h>   // Para comparar con estándar
#include "strings.h"  // Nuestras funciones

int main() {
    printf("=== Funciones de Cadenas (Strings) ===\n\n");
    
    // 1. Probando mi_strlen
    char texto[] = "Hola Mundo";
    printf("1. mi_strlen:\n");
    printf("   Texto: '%s'\n", texto);
    printf("   Longitud (mi_strlen): %zu\n", mi_strlen(texto));
    printf("   Longitud (strlen estándar): %zu\n", strlen(texto));
    printf("\n");
    
    // 2. Probando mi_strcmp
    char str1[] = "Hola";
    char str2[] = "Hola";
    char str3[] = "Adios";
    
    printf("2. mi_strcmp:\n");
    printf("   Comparando '%s' y '%s': %d\n", str1, str2, mi_strcmp(str1, str2));
    printf("   Comparando '%s' y '%s': %d\n", str1, str3, mi_strcmp(str1, str3));
    printf("   Comparando '%s' y '%s': %d\n", str3, str1, mi_strcmp(str3, str1));
    printf("\n");
    
    // 3. Probando mi_strcpy
    char origen[] = "Copiame!";
    char destino[50];  // Suficiente espacio
    
    printf("3. mi_strcpy:\n");
    printf("   Origen: '%s'\n", origen);
    printf("   Destino antes: '%s'\n", destino);
    
    mi_strcpy(destino, origen);
    
    printf("   Destino después: '%s'\n", destino);
    printf("\n");
    
    // 4. Caso especial: string vacío
    printf("4. Casos especiales:\n");
    printf("   Longitud de string vacío: %zu\n", mi_strlen(""));
    printf("   Comparar vacíos: %d\n", mi_strcmp("", ""));
    
    return 0;
}