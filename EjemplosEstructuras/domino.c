//
// Created by Cecilia Curlango on 4/7/26.
//

#include "domino.h"

void mostrarFicha(FichaDomino ficha) {
    printf("[%d|%d]",ficha.ladoIzquierdo,ficha.ladoDerecho);
}
int regresarSuma(FichaDomino ficha) {
    return ficha.ladoDerecho + ficha.ladoIzquierdo;
}
