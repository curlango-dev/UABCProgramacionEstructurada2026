#include <stdio.h>
/*
 * Tienes una ventana gráfica de 400 pixeles
 * de ancho por 600 de alto. Pide al usuario
 * la medida de un cuadrado y calcula y
 * muestra las coordenadas en las que
 * aparecerá cada esquina de éste
 * cuando se dibuje en el centro de la ventana
 * */
int main(void) {
    int lado, cx1,cx2,cx3,cx4;
    int cy1, cy2,cy3,cy4;
    int ancho = 400;
    int largo = 600;
    printf("Cuanto mide el lado? ");
    scanf("%d",&lado);
    if (lado <= 0 || lado > largo || lado > ancho ) {
        printf("El cuadro es demasiado grande o pequeño.\n");
    } else {
        cy1 = largo /2 + lado /2;
        cy2 = cy1;
        cy3 = (largo - lado) / 2;
        cy4 = cy3;

        cx1 = ancho / 2 + lado /2;
        cx4 = cx1;
        cx2 = (ancho - lado) / 2;
        cx3 = cx2;
        printf("Las coordenadas del cuadro serán:\n");
        printf("punto 1: %d, %d\n", cx1, cy1);
        printf("punto 2: %d, %d\n", cx2, cy2);
        printf("punto 3: %d, %d\n", cx3, cy3);
        printf("punto 4: %d, %d\n", cx4, cy4);
    }
    return 0;
}