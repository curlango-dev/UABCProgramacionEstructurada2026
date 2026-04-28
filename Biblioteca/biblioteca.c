//
// Created by Cecilia Curlango on 4/28/26.
//
#include <stdio.h>
#include "biblioteca.h"
void agregarLibro() {
    Libro libro;
    printf("Cómo se llama el libro? ");
    fgets(&libro.titulo,256,stdin);
    printf("Cómo se llama el autor? ");
    fgets(&libro.autor,256,stdin);
    printf("Cómo se llama la editorial? ");
    fgets(&libro.editorial,256,stdin);
    printf("Cuántas páginas tiene? ");
    scanf("%d", &libro.paginas);
    printf("Cuál su número de control? ");
    scanf("%d",&libro.id);

    // Escribir en el archivo el libro
    FILE *archivo;
    archivo = fopen("biblioteca.libros","ab");
    if (archivo==NULL) {
        printf("No se pudo abrir biblioteca.libros");
    } else {
        fwrite(&libro,sizeof(Libro),1,archivo);
        fclose(archivo);
    }

}