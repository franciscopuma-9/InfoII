#include <stdio.h>

int main(){

    int cuenta, saldo, total = 0;

    do {
        printf("\nIngrese su numero de cuenta(valor negativo para finalizar): ");
        scanf("%d",&cuenta);
        if (cuenta >= 0){
            printf("Ingrese el saldo de su cuenta: ");
            scanf("%d",&saldo);
            if (saldo == 0)
            {
                printf("%d--------Nulo",cuenta);
            }
            else if (saldo < 0)
            {
                printf("%d--------Deudor",cuenta);
            }
            else
            {
                printf("%d--------Acreedor",cuenta);
                total +=saldo;
            } 
        }            
        
    } while(cuenta >= 0);
    printf("\nLa suma total de los acreedores es: %d",total);


    return 0;
}