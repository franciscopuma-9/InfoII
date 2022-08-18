#include <stdio.h>

int main(){
    int num1, num2;

    printf("Ingrese primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese segundo numero: ");
    scanf("%d",&num2);

    if (num1 > num2){
        printf("El primero numero es mayor");
    }
    else{
        printf("El segundo numero es mayor");
    }




    return 0;
}