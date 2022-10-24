#include <stdio.h>
#include <stdlib.h>
#include "estructuras_char.h"

int main(void) {



    Pila * p = (Pila *) malloc(sizeof(Pila));
    inicializacion(p);

    //Ingreso elementos
    char cadena[10] = "francisco";

    for (int i = 0; i < 9; i++){
        push(p, cadena[i]);
    }

    mostrar(p);

    for (int x = 0; x < 9; x++){
        cadena[x] = pop(p);
    }
    printf("%s", cadena);

    return 0;
}
