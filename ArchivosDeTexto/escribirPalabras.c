// Escribe un programa que lea todas las palabras
// que escribe el usuario y las guarde en el archivo
// con nombre "palabras.txt". Si el usuario escribe
// la palabra "fin" el programa debe terminar.
//
// Created by Cecilia Curlango on 4/21/26.
//
#include <stdio.h>
#include <string.h>
int main() {
    FILE *apuntador;
    char palabra[255];

    // abrir archivo
    apuntador = fopen("palabras.txt","a");
    if (apuntador==NULL) {
        printf("No se pudo abrir el archivo, bye\n");
        return 1;
    }
    do {
        // leer palabra
        printf("Escribe una palabra o (fin) para terminar\n");
        fgets(palabra,sizeof(palabra),stdin);
        if (strcmp(palabra,"fin\n")!=0) {
            // escribir palabra
        fputs(palabra,apuntador);
        }

        // si es "fin" terminar
        //palabra[strlen(palabra)-1] = '\0';
    }while (strcmp(palabra,"fin\n")!=0);

    // cerrar archivo
    fclose(apuntador);

    // mostrar todas la palabras que tiene el archivo
    //  e indicar cuántas son
    apuntador = fopen("palabras.txt","r");
    if (apuntador==NULL) {
        printf("No se pudo abrir el archivo para lectura, bye\n");
        return 1;
    }
    int cantidadDePalabras = 0;
    while (fgets(palabra,sizeof(palabra),apuntador) != 0) {
        cantidadDePalabras++;
        printf("%s",palabra);
    }
    // cerrar archivo
    fclose(apuntador);
    printf("El archivo tiene %d palabras\n",cantidadDePalabras);


    apuntador = fopen("palabras.txt","r");
    if (apuntador==NULL) {
        printf("No se pudo abrir el archivo para lectura, bye\n");
        return 1;
    }
    char palabraBuscada[256];
    printf("Qué palabra buscas?\n");
    fgets(palabraBuscada,sizeof(palabraBuscada),stdin);
    bool laEncontro = false;
    while (fgets(palabra,sizeof(palabra),apuntador) != 0) {
        if (strcmp(palabra,palabraBuscada)==0) {
            laEncontro = true;
        }
    }
    // cerrar archivo
    fclose(apuntador);
    if (laEncontro == true) {
        printf("La palabra %s si está\n",palabraBuscada);
    } else {
        printf("La palabra %s NO está\n",palabraBuscada);
    }
    return 0;
}