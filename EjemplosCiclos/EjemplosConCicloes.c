//
// Created by Cecilia Curlango on 2/10/26.
//
#include <stdio.h>
int main() {
    // int i;
    int inicio;
    printf("Cual es el primer número? ");
    scanf("%d", &inicio);
    for (int i=inicio;i<=10;i++) { //  i+=2printf("dentro del ciclo: i vale %d\n",i);
        printf("dentro del ciclo: i vale %d\n",i);
    }
    //printf("fuera del ciclo: i vale %d\n",i);
    return 0;
}