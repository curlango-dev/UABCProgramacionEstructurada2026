//
// Created by Cecilia Curlango on 2/10/26.
//
/*
 * Tienes una ventana gráfica de M pixeles
 * de ancho por N de alto. Pide al usuario
 * el punto en el que quiere que inicie una
 * línea horizontal y cuánto mide. Calcula
 * y muestra el punto final de la línea e
 * indica si se podrá dibujar toda dentro de
 * la ventana.
*/
#include <stdio.h>
int main() {
    int px1,px2;
    int py1, py2;
    int tamaño;
    int ancho = 400;
    int largo = 600;
    printf("Coordenada en x del inicio de la línea? ");
    scanf("%d", &px1);
    printf("Coordenada en y del inicio de la línea? ");
    scanf("%d", &py1);
    printf("De qué tamaño es la línea? ");
    scanf("%d",&tamaño);
    px2 = px1 + tamaño;
    py2 = py1;
    if (ancho < px2) {
        printf("La línea se sale del área.\n");
    } else {
        printf("El punto final de la "
               "línea es: (%d,%d)", px2,py2);
    }
    return 0;
}