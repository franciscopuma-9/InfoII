#include <stdio.h>

int main(){
    int valor;
    do
    {
        printf("Ingrese valor entre 0 y 999(Ingrese 0 para terminar el programa): ");
        scanf("%d", &valor);
        if (valor < 10){
            printf("1 digito");
        }
        else if (valor < 100)
        {
            printf("2 Digitos");
        }
        else{
            printf("3 Digitos");
        }
        
    } while (valor != 0);
    
    return 0;
}