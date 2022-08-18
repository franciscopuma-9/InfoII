#include <stdio.h>

int main(){

    float precio, total;
    int cantidad;

    printf("Ingrese precio de producto: ");
    scanf("%f", &precio);
    printf("Ingrese cantidad de productos: ");
    scanf("%d", &cantidad);

    total = precio * cantidad;
    printf("El total a pagar es: %.2f", total);

   return 0;
}