#include <stdio.h>

int main(){

    int num1, num2, num3;
    float promedio;

    printf("Ingrese primera nota: ");
    scanf("%d",&num1);
    printf("Ingrese segunda nota: ");
    scanf("%d",&num2);
    printf("Ingrese tercera nota: ");
    scanf("%d",&num3);

    promedio = (num1+num2+num3)/3;
    
    if(promedio >= 7){
        printf("Promocionado");
    }


    return 0;
}