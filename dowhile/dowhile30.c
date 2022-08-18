#include <stdio.h>

int main(){

    int valor, suma = 0; 

    do
    {
        printf("Ingrese valor(ingrese 9999 para terminar): ");
        scanf("%d", &valor);
        if (valor!=9999){
            suma +=valor;
        }

    } while (valor !=9999);
    printf("El valor acumulado es: %d\n",suma);
    if (suma == 0){
        printf("La sumatoria es cero.");
    }
    else
    {
        if (suma < 0){
            printf("La sumatoria es un numero negativo.");
        }
        else
        {
            printf("La sumatoria es un numero positivo.");
        }
        
    }
    

    return 0;
}