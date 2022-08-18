#include <stdio.h>

int main(){

    int num1, num2, suma, resta, multi;
    float divi;

    printf("Ingrese primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese segundo numero: ");
    scanf("%d",&num2);

    if (num1 < num2){
        suma = num1 + num2;
        resta = num1 - num2;
        printf("La suma de los numeros es %d y la resta es %d", suma, resta);

    }
    else{
        multi = num1 * num2;
        divi = num1 / num2;

        printf("El producto de los numeros es %d y la division es %f", multi, divi);
        printf("%f",divi);
    }





    return 0;
}