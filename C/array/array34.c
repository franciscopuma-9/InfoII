#include <stdio.h>

int main(){

    float maniana[4], tarde[4];
    float sumaman = 0, sumatar = 0;
    int x;

    for(x = 0; x < 4; x++){
        printf("Ingrese sueldo turno maniana: ");
        scanf("%f", &maniana[x]);
        sumaman +=maniana[x];
    }
    for(x = 0; x < 4; x++){
        printf("Ingrese sueldo turno tarde: ");
        scanf("%f", &tarde[x]);
        sumatar += tarde[x];
    }
    printf("\nManiana:%.2f\nTarde:%.2f",sumaman, sumatar);


    return 0;
}