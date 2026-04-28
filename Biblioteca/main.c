#include <stdio.h>
#include "biblioteca.h"
void mostrarMenu();
int leerOpcion(int maxima);
void procesarOperacion(int operacion);

int main() {
    bool terminar = false;
    int operacion = 0;
    do {
        printf("*** Biblioteca Infinita ***\n");
        mostrarMenu();
        operacion = leerOpcion(6);
        procesarOperacion(operacion);
        if (operacion == 6) {
            terminar = true;
        }
    }while (!terminar);
    return 0;
}

void procesarOperacion(int operacion) {
    switch (operacion) {
        case 2: agregarLibro();
            break;
        case 5: consultarAcervo();
            break;
        case 1: consultarLibro();
            break;
        case 4: eliminarLibro();
            break;
    }
}
void mostrarMenu() {
    printf("Menú\n");
    printf("1. Consultar libro\n");
    printf("2. Agregar libro\n");
    printf("3. Corregir libro\n");
    printf("4. Eliminar libro\n");
    printf("5. Consultar acervo\n");
    printf("6. Terminar\n");
}

int leerOpcion(int maxima) {
    int opcion = 0;
    do {
        printf("Selecciona la opción: ");
        scanf("%d", &opcion);
        getchar();
    }while (opcion<1 || opcion>maxima);
    return opcion;
}