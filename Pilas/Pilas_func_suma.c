#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

void suma(Pila *p){
    /*
    int valor1 = pop(p);
    int valor2 = pop(p);
    int r = valor1 + valor2;
    */
    push(p, pop(p) + pop(p));
}

int main(void) {

    Pila * p = (Pila *) malloc(sizeof(Pila));
    inicializacion(p);

    push(p,4);
    push(p,8);
    suma(p);
    int r = pop(p);
    printf("La suma es: %d", r);


return 0;
}
