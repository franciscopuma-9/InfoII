#include <stdio.h>

int main(){

    int x = 0, sumatoria = 0, aux, promedio;

    while (x < 10){
        printf("Ingrese un numero: ");
        scanf("%d", &aux);
        sumatoria = sumatoria + aux;
        x+=1;
    }
    promedio = sumatoria / 10;
    printf("El promedio de la sumatoria es: %d", promedio);


    return 0;
}