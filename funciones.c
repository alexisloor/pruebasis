#include <stdio.h>

// Calcula el peso promedio de los elefantes en el archivo pasado como
// argumento.
double calcularPromedio(char *filename) {
    int suma = 0;
    double cantidad = 0;

    // Abrimos el archivo.
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return -1;
    }

    int peso;

    // Leemos el archivo hasta que llegamos al final.
    while (fscanf(fp, "%d", &peso) != EOF) {
        suma += peso;
        cantidad += 1;
    }

    fclose(fp);

    return suma / cantidad;
}