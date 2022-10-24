#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras_char.h"

int main(void) {



    Pila * p = (Pila *) malloc(sizeof(Pila));
    inicializacion(p);

    //Ingreso elementos
    char cadena[100] = "francisco(dsad){]";

    for (int i = 0; i < strlen(cadena); i++){
        push(p, cadena[i]);
    }

    mostrar(p);
    for (int x = 0; x < 9; x++){
        char aux = pop(p);
        
    }
    
    printf("%s", cadena);

    return 0;
}
