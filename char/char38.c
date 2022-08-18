#include <stdio.h>


int main(){
    int valor, suma = 0;
    char letra = 's';


    while (letra == 's'){
        printf("Ingrese un valor: ");
        scanf("%d", &valor);
        suma +=valor;
        printf("Ingrese s para continuar y n para salir: ");
        scanf(" %c", &letra);
        }
    printf("La sumatoria de los valores es: %d",suma);

    



    return 0;
}