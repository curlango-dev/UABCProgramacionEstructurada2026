#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Piramides.h"

int lanzarDado();
int lanzarDadoTamano(int tamano);
int main(void) {
    srand(time(NULL));
    for (int i=0; i<5; i++) {
        printf("cayó %d\n", lanzarDadoTamano(30));
    }
    //mostrarPiramide();
    // printf("Cuantos renglones tiene el cuadro? ");
    // int renglones;
    // scanf("%d", &renglones);
    // printf("Cuantas columnas tiene el cuadro? ");
    // int columnas;
    // scanf("%d", &columnas);
    // cuadro(renglones,columnas);
    return 0;
}
int lanzarDadoTamano(int tamano) {
    int valor = 1;
    valor = rand() %tamano +1;
    return valor;
}
int lanzarDado() {
    int valor = 1;
    valor = rand() %6 +1;
    return valor;
}