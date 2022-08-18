#include <stdio.h>

int main(){

    int vector[10];
    int x, orden;

    for(x = 0; x < 10;x++){
        printf("Ingrese valor: ");
        scanf("%d", &vector[x]);
    }
    orden = 1;
    for(x = 0; x < 9; x++){
        if (vector[x+1] < vector[x]){
            orden = 0;
            break;
        }
    }
    if (orden == 0){
        printf("Esta desordenado.");
    }
    else
    {
        printf("Esta ordenado.");
    }
    
    return 0;
}