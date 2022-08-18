#include <stdio.h>
#define TAM 8
void carga(int vector[TAM]){
    for(int x = 0; x < TAM; x++){
        printf("Ingrese valor: ");
        scanf("%d", &vector[x]);
    }
}
int suma(int vector[TAM]){
    int suma = 0;
    for(int x = 0; x < TAM; x++){
        suma +=vector[x];
    }
    return suma;
}
int sumaMayores36(int vector[TAM]){
    int suma = 0;
    for(int x = 0; x < TAM; x++){
        if(vector[x]>36){
            suma +=vector[x];
        }
    }
    return suma;
}
int cantMayores50(int vector[TAM]){
    int suma = 0;
    for(int x = 0; x < TAM; x++){
        if(vector[x]>50){
            suma++;
        }
    }
    return suma;
}

int main(void){
    int vec[TAM];
    carga(vec);
    printf("\nLa sumatoria total es: %d",suma(vec));
    printf("\nLa sumatoria de numeros mayores a 36 es: %d", sumaMayores36(vec));
    printf("\nLa cantidad de elementos mayores a 50 es: %d", cantMayores50(vec));


    return 0;

}