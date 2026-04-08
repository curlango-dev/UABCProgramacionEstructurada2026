//
// Created by Cecilia Curlango on 4/7/26.
//

#ifndef ESTRUCTURAS_CARTAS_H
#define ESTRUCTURAS_CARTAS_H
#include <stdio.h>
typedef struct {
    int valor;
    char palo;
}Carta;
void entregar5Cartas(Carta cartas[], int cuantas, Carta manoPoker[]);
void mostrarCarta(Carta carta);
void crearBaraja(Carta cartas[]);
#endif //ESTRUCTURAS_CARTAS_H