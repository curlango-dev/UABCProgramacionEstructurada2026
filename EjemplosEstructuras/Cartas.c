//
// Created by Cecilia Curlango on 4/7/26.
//

#include "Cartas.h"
void entregar5Cartas(Carta cartas[], int cuantas, Carta manoPoker[]) {
    for (int i=0; i<5; i++) {
        manoPoker[i] = cartas[cuantas-i-1];
    }
}
void crearBaraja(Carta cartas[]) {
    int k=0;
    for (int i=1; i<14; i++) {
        cartas[k].valor = i;
        cartas[k].palo = 'C';
        k++;
    }
    for (int i=1; i<14; i++) {
        cartas[k].valor = i;
        cartas[k].palo = 'D';
        k++;
    }
    for (int i=1; i<14; i++) {
        cartas[k].valor = i;
        cartas[k].palo = 'T';
        k++;
    }
    for (int i=1; i<14; i++) {
        cartas[k].valor = i;
        cartas[k].palo = 'P';
        k++;
    }
}
void mostrarCarta(Carta carta) {
    switch (carta.valor) {
        case 1:
            printf("A %c", carta.palo);
            break;
        case 11:
            printf("J %c", carta.palo);
            break;
        case 12:
            printf("Q %c", carta.palo);
            break;
        case 13:
            printf("K %c", carta.palo);
            break;
        default:
            printf("%d %c", carta.valor,carta.palo);
            break;
    }
}