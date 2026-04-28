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
void consultarAcervo() {
    Libro libroLeido;
    // Leer del archivo todos los libros
    FILE *archivo;
    archivo = fopen("biblioteca.libros","rb");
    if (archivo==NULL) {
        printf("No se pudo abrir biblioteca.libros");
    } else {
        int cuantosLeidos;
        do {
            cuantosLeidos = fread(&libroLeido,sizeof(Libro),1,archivo);
            if (cuantosLeidos == 1) {
                mostrarLibro(libroLeido);
            }
        } while (cuantosLeidos == 1);
        fclose(archivo);
    }
}

void eliminarLibro() {
    int idBuscado;

    printf("Cuál es el id del libro que quieres eliminar? ");
    scanf("%d",&idBuscado);
    getchar();
    Libro libroLeido;
    // Leer del archivo todos los libros
    FILE *archivoTemporal;
    FILE *biblioteca;
    biblioteca = fopen("biblioteca.libros","rb");
    if (biblioteca==NULL) {
        printf("No se pudo abrir biblioteca.libros");
    } else {
        archivoTemporal = fopen("temporal.bin","wb");
        if (archivoTemporal==NULL) {
            printf("No se pudo abrir el respaldo");
        } else {
            int cuantosLeidos;
            do {
                cuantosLeidos = fread(&libroLeido,sizeof(Libro),1,biblioteca);
                // verifica si es el libro deseado
                if (cuantosLeidos == 1 &&
                    libroLeido.id == idBuscado) {
                    // encontró el libro se elimina
                    printf("Estoy borrando el libro:\n");
                    mostrarLibro(libroLeido);
                    } else {
                        fwrite(&libroLeido,sizeof(Libro),1,archivoTemporal);
                    }
            } while (cuantosLeidos == 1);
            fclose(archivoTemporal);
            fclose(biblioteca);
            remove("biblioteca.libros");
            rename("temporal.bin","biblioteca.libros");5

        }
    }
}
void consultarLibro() {
    int idBuscado;
    bool libroEncontrado = false;
    printf("Cuál es el id del libro que buscas? ");
    scanf("%d",&idBuscado);
    getchar();
    Libro libroLeido;
    // Leer del archivo todos los libros
    FILE *archivo;
    archivo = fopen("biblioteca.libros","rb");
    if (archivo==NULL) {
        printf("No se pudo abrir biblioteca.libros");
    } else {
        int cuantosLeidos;
        do {
            cuantosLeidos = fread(&libroLeido,sizeof(Libro),1,archivo);
            // verifica si es el libro deseado
            if (cuantosLeidos == 1 &&
                libroLeido.id == idBuscado) {
                mostrarLibro(libroLeido);
                libroEncontrado = true;
            }
        } while (cuantosLeidos == 1 && !libroEncontrado);

        fclose(archivo);
        if (!libroEncontrado) {
            printf("El libro no está en la biblioteca\n");
        }
    }
}
void mostrarLibro(Libro libro) {
    printf("Título: %s\n",libro.titulo);
    printf("Autor: %s\n",libro.autor);
    printf("Editorial: %s\n",libro.editorial);
    printf("Páginas: %d\n",libro.paginas);
    printf("Id: %d\n",libro.id);
}