#include <stdio.h>

int main(){

    int i, valor, suma = 0, promedio;

    for (i = 0; i < 10 ; i++){
        printf("Ingrese valor: ");
        scanf("%d", &valor);
        suma +=valor;
    }
    promedio = suma / 10;
    printf("%d - %d", suma, promedio); 




    return 0;
}