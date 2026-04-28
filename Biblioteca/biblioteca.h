//
// Created by Cecilia Curlango on 4/28/26.
//

#ifndef ABCCARCHIVOSBINARIOS_BIBLIOTECA_H
#define ABCCARCHIVOSBINARIOS_BIBLIOTECA_H
typedef struct  {
    char titulo[256];
    char autor[256];
    int paginas;
    char editorial[256];
    int id;
} Libro;
void mostrarLibro(Libro libro);
void agregarLibro();
void consultarAcervo();
void consultarLibro();
void eliminarLibro();
#endif //ABCCARCHIVOSBINARIOS_BIBLIOTECA_H