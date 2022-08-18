#include <stdio.h>

int main(){
    int lado, perimetro;

    printf("Ingrese valor del lado: ");
    scanf("%d", &lado);
    perimetro = lado * 4;
    
    printf("El valor de el perimetro es: %d", perimetro);

    return 0;
}