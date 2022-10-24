#include <stdio.h>

int main(){
    float sueldo;

    printf("Ingrese su sueldo: ");
    scanf("%f",&sueldo);

    if (sueldo > 3000){
        printf("Debe abonar impuestos.");
    }


    return 0;
}