#include <stdio.h>

int main(){

    int x;
    int vector[5];

    for (x = 0; x < 5 ; x++){
        printf("Ingrese valor: ");
        scanf("%d", &vector[x]);
    }
    for (x = 0; x < 5 ; x++){
        printf("%d ", vector[x]);
    }


    return 0;
}