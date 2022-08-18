#include <stdio.h>
#define TAM 10


void carga(int vector[TAM]){
    for(int x = 0; x < TAM; x++){
        printf("Ingrese valor: ");
        scanf("%d", &vector[x]);
    }
}
void ordenado(int vector[TAM]){
    for(int x = 1; x < TAM; x++){
        if (vector[x] < vector[x-1]){
            printf("Esta desordenado.");
            break;
        }
        else
        {
            if ((x + 1) == TAM){
                printf("Esta ordenado.");
            }
        }
        
    }
    
}

int main (void){
    int vec[TAM];
    carga(vec);
    ordenado(vec);


    return 0;
}