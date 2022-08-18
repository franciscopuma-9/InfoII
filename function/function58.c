#include <stdio.h>

int pago(int num1, int num2);


int main(){
    int num1, num2;
    printf("Ingrese pago: ");
    scanf("%d", &num1);
    printf("Ingrese cantidad de horas: ");
    scanf("%d", &num2);
    printf("El valor de la suma es: %d", pago(num1, num2));
 
    return 0;
}
int pago(int num1, int num2){
    return (num1 * num2);
}