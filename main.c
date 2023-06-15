#include <stdio.h>

#include "funciones.h"

// Calcula el promedio de los pesos de los elefantes
// en el archivo "elephants.txt".
int main() {
    double promedio = calcularPromedio("elephants.txt");
    printf("Peso promedio: %.2f\n", promedio);
    return 0;
}