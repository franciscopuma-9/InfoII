#include <stdio.h>

int main(){

    int primero, segundo, tercero, cuarto, suma;
    float promedio;

    printf("Ingrese primer numero: ");
    scanf("%d",&primero);
    printf("Ingrese segundo numero: ");
    scanf("%d",&segundo);
    printf("Ingrese tercer numero: ");
    scanf("%d",&tercero);
    printf("Ingrese cuarto numero: ");
    scanf("%d",&cuarto);

    suma = primero + segundo + tercero + cuarto;
    promedio = suma / 4;
    printf("la suma de los 4 valores es: %d \n",suma);
    printf("El promedio es: %.2f",promedio);

   return 0;
}