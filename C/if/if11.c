#include <stdio.h>

int main(){
    int num1, num2, num3, mayor;

    printf("Ingrese primera nota: ");
    scanf("%d",&num1);
    printf("Ingrese segunda nota: ");
    scanf("%d",&num2);
    printf("Ingrese tercera nota: ");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3){
        mayor = num1;
    }
    else{
        if (num2 > num3){
            mayor = num2;
        }
        else{
            mayor = num3;
        }
    }
    printf("el mayor es %d", mayor);

    return 0;
}