#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un valor: ");
    scanf("%d", &num);

    if (num < 0){
        printf("El numero ingresado es negativo.");
    }
    else
    {
        if (num == 0){
            printf("El numero ingresado es cero.");
        }
        else
        {
            printf("El numero ingresado es positivo.");
        }
        
    }
    
    return 0;
}