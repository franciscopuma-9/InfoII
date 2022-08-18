#include <stdio.h>

int suma(int num1, int num2){
    return (num1 + num2);
}
int main(){
    int num1, num2;
    printf("Ingrese primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%d", &num2);
    printf("El valor de la suma es: %d", suma(num1, num2));
 
    return 0;
}