//
// Created by Cecilia Curlango on 4/7/26.
//

#ifndef ESTRUCTURAS_DOMINO_H
#define ESTRUCTURAS_DOMINO_H
#include <stdio.h>
typedef struct {
    int ladoDerecho,
    ladoIzquierdo;
}FichaDomino;

void mostrarFicha(FichaDomino ficha);
int regresarSuma(FichaDomino ficha);
#endif //ESTRUCTURAS_DOMINO_H