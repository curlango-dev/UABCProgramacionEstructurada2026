#include <stdio.h>
#include "cosasDePersonas.h"
#include "domino.h"
#include <stdlib.h>
#include <time.h>
#include "Cartas.h"

void generarFichas(FichaDomino fichas[],int cuantas);
int main(void) {
    Carta baraja[52];
    crearBaraja(baraja);
    for (int i=0;i<52;i++) {
        mostrarCarta(baraja[i]);
        printf("\n");
    }
    Carta mano[5];
    entregar5Cartas(baraja,52,mano);
    printf("\nEsta es la mano\n");
    for (int i=0;i<5;i++) {
        mostrarCarta(mano[i]);
        printf(" ");
    }
    // FichaDomino muchasFichas[10];
    // generarFichas(muchasFichas,10);
    // for (int i=0;i<10;i++) {
    //     if (regresarSuma(muchasFichas[i])%2 == 0) {
    //         mostrarFicha(muchasFichas[i]);
    //     }
    // }
    // printf("\nEstas son las fichas\n");
    // for (int i=0;i<10;i++) {
    //         mostrarFicha(muchasFichas[i]);
    // }
    // FichaDomino unaFicha = {3,4};
    // mostrarFicha(unaFicha);
    // printf(" La suma de sus puntos es %d\n", regresarSuma(unaFicha));
    // Persona gente[5];
    //
    // for (int i=0;i<5;i++) {
    //     printf("Captura de la persona %d\n", i+1);
    //     printf("\nCómo te llamas? ");
    //     scanf("%s", gente[i].nombre);
    //     printf("\nTu cuantos años tienes?");
    //     scanf("%d", &gente[i].edad);
    //     printf("\nCuanto ganas? ");
    //     scanf("%f", &gente[i].ingreso);
    // }
    //
    // for (int i=0;i<5;i++) {
    //     mostrarPersona(gente[i]);
    //     printf("\n");
    // }

    return 0;
}
void generarFichas(FichaDomino fichas[],int cuantas) {
    srand(time(NULL));
    for (int i=0;i<cuantas;i++) {
        fichas[i].ladoIzquierdo = rand()%7;
        fichas[i].ladoDerecho = rand()%7;
    }
}