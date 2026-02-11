//
// Created by Cecilia Curlango on 2/10/26.
//
#include <stdio.h>
int main() {
    int rebanadas = 8;
    char respuesta = 'w';

    while (rebanadas > 0 ) {
        printf("Quieres pizza? ");
        scanf("%c", &respuesta);
        getchar();
        if (respuesta == 'S' || respuesta=='s') {
            rebanadas--; // re = re - 1;
            printf("Ahí está. Quedan %d rebanadas\n",
                rebanadas);
        }

    }

    return 0;
}