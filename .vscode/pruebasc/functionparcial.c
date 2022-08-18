#include <stdio.h>
#include "math.h"

void area_vol(float * r, float * a, float *v){
    *a = 4 * M_PI * (*r) * (*r);
    *v = 4 * M_PI * (*r) * (*r) * (*r) / 3;
}



int main (void){
    float radio, area, volumen;
    do
    {
        printf("Ingrese el radio ( > 0): ");
        scanf("%f", &radio);
            if (radio < 0){
                printf("Error\n");
            }
    } while (radio <= 0);
    area_vol(&radio, &area, &volumen);
    printf("\nArea:%.2f\nVolumen:%.2f", area, volumen);
    
    return 0;
}