#include <stdio.h>

int main(){
    int primero, segundo, tercero, cuarto, suma, producto;

    printf("Ingrese primer numero: ");
    scanf("%d",&primero);
    printf("Ingrese segundo numero: ");
    scanf("%d",&segundo);
    printf("Ingrese tercer numero: ");
    scanf("%d",&tercero);
    printf("Ingrese cuarto numero: ");
    scanf("%d",&cuarto);
    suma = primero + segundo;
    producto = tercero * cuarto;
    
    printf("la suma de los 2 primeros valores son: %d \n",suma);
    printf("el producto del tercero y el cuarto es: %d", producto);


    return 0;
}