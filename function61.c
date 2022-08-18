#include <stdio.h>

void numeros(int valor){
    if (valor > 0){
        for(int x = 0; x <= valor; x++){
            printf("%d\n", x);
        }
    }
    else
    {
        printf("Error, ha ingresado un numero negativo");
    }
        
}

int main(){
    int valor;
    printf("Ingrese un valor: ");
    scanf("%d", &valor);
    numeros(valor);
    return 0;
}