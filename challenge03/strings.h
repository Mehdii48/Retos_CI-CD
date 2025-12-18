#ifndef STRINGS_H
#define STRINGS_H

#include <stddef.h>  // Para size_t

// Versiones manuales de funciones estándar de strings
size_t mi_strlen(const char *s);            // Calcula longitud
int mi_strcmp(const char *s1, const char *s2); // Compara dos strings
char *mi_strcpy(char *dest, const char *src);  // Copia un string

#endif