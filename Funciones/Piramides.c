//
// Created by Cecilia Curlango on 2/17/26.
//
#include <stdio.h>
#include "Piramides.h"
void cuadro(int renglones, int columnas) {
    for (int j=1; j<=renglones; j++) {
        for (int i=j; i<columnas+j; i++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}
void mostrarPiramideVariable(int tamano) {
    for (int j=1; j<=tamano; j++) {
        for (int i=j; i<=tamano; i++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}
void mostrarPiramide() {
    for (int j=1; j<5; j++) {
        for (int i=j; i<=4; i++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}