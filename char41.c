#include <stdio.h>

int main(){

    int edad1, edad2;
    char sexo1, sexo2;

    printf("Ingrese su edad: ");
    scanf("%d", &edad1);
    printf("Ingrese su sexo (m/f): ");
    scanf(" %c", &sexo1);

    printf("Ingrese su edad: ");
    scanf("%d", &edad2);
    printf("Ingrese su sexo (m/f): ");
    scanf(" %c", &sexo2);

    if (edad1 == edad2){
        printf("%c y %c la misma edad", sexo1, sexo2);
    }
    else {
        if (edad1 > edad2){
            printf("Su edad es %d y su sexo es %c",edad1, sexo1);
            }
            else {
                printf("Su edad es %d y su sexo es %c",edad2, sexo2);
            }
    }
    



    return 0;
}