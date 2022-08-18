#include <stdio.h>
#define TAM 5

void carga(int vec[TAM]){
    for(int x = 0; x < TAM; x++){
        printf("Ingrese valor: ");
        scanf("%d", &vec[x]);
    }
}
void menor(int vec[TAM]){
    int menor = vec[0];
    int posicion = 0;
    for(int x = 1; x < TAM; x++){
        if (vec[x] < menor){
            menor = vec[x];
            posicion = x;
        }
        
    }
    printf("El menor numero es %d en la posicion %d", menor, posicion);
}
void verificar(int vec[TAM]){
    int menor = vec[0];
    int cant = 0;
    for(int x = 1; x < TAM; x++){
        if (vec[x] == menor){
            menor = vec[x];
            cant++;
        }
    }
    if(cant > 0){
        printf("\nEl menor se repite %d cantidad de veces.", cant+1);
    }
    else
    {
        printf("\nEl menor no se repite.");
    }       
}


int main(void){
    int vec[TAM];
    carga(vec);
    menor(vec);
    verificar(vec);


    return 0;
}