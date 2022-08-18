#include <stdio.h>
#define TAM 5

void carga(int vec[TAM]){
    for(int x = 0; x < TAM; x++){
        printf("Ingrese valor: ");
        scanf("%d", &vec[x]);
    }
}
void mayor(int vec[TAM]){
    int mayor = vec[0];
    int posicion = 0;
    for(int x = 1; x < TAM; x++){
        if (vec[x] > mayor){
            mayor = vec[x];
            posicion = x;
        }
    }
    printf("El mayor numero es %d en la posicion %d", mayor, posicion);

}


int main(void){
    int vec[TAM];
    carga(vec);
    mayor(vec);


    return 0;
}