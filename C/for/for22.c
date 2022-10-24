#include <stdio.h>

int main(){

    int i, valor, suma = 0;

    for (i = 0; i < 10; i++){
        printf("Ingrese valor: ");
        scanf("%d", &valor);

        if (i >=5){
            suma +=valor;
        }
    }
    printf("%d",suma);


    return 0;
}