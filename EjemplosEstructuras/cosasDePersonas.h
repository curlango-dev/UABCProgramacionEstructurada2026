//
// Created by Cecilia Curlango on 4/7/26.
//

#ifndef ESTRUCTURAS_COSASDEPERSONAS_H
#define ESTRUCTURAS_COSASDEPERSONAS_H
#include <stdio.h>
typedef struct {
    char nombre[100];
    int edad;
    float ingreso;
}Persona;
void mostrarPersona(Persona alguien);
#endif //ESTRUCTURAS_COSASDEPERSONAS_H