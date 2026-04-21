#include <stdio.h>

int main(void) {
    char saludo[256];
    char miArchivo[] = "cecy.txt";
    FILE *apuntadorDeArchivo;

    // abrir
    apuntadorDeArchivo = fopen(miArchivo, "r");
    // apuntadorDeArchivo = fopen("../saludoExt2.txt",
    //     "w");
    // verificar que se pudo abrir
    if (apuntadorDeArchivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        // salir
        return 12;
    }
    // leer
    printf("Esto es lo que hay en el archivo:\n");
    while (fgets(saludo, sizeof(saludo), apuntadorDeArchivo) != 0) {
        printf("%s", saludo);
    }

    // escribir
    // fprintf(apuntadorDeArchivo,"%s\n",saludo);
    // cerrar
    fclose(apuntadorDeArchivo);
    return 0;
}
