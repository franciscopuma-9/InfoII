#include <stdio.h>

int main(){

    int vector[8];
    int x, total = 0, mayor36 = 0, mayor50 = 0;

    for (x = 0; x < 8 ;x++){
        printf("Ingrese valor: ");
        scanf("%d", &vector[x]);
        total += vector[x];
        if (vector[x] > 36){
            mayor36 += vector[x];
        }
        if (vector[x] > 50){
            mayor50++;
        }
    }
    printf("\nSuma total: %d\nSumatoria de numeros mayores a 36: %d\nCantidad de numeros mayores a 50: %d",total, mayor36,mayor50);


    return 0;
}