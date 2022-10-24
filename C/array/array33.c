#include <stdio.h>

int main (){

    float vector[5];
    int x, mayor = 0, menor = 0,igual = 0;
    float promedio;

    for (x = 0; x < 5; x++){
        printf("Ingrese su altura: ");
        scanf("%f", &vector[x]);
        promedio += vector[x];
    }
    promedio = promedio / 5;
    printf("Promedio: %.2f", promedio);
    for (x = 0; x < 5; x++){
        if (vector[x] < promedio){
            menor++;
        }
        else { 
            if (vector[x] > promedio){
                mayor++;
            }
            else
            {
                igual++;
            }
            
        }
    }
    printf("\nMenor:%d\nMayor:%d\nIguales:%d", menor,mayor, igual);
    return 0;
}