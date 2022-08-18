#include <stdio.h>

int main(){

    int i, valor, base, altura, superficie, cont = 0;

    printf("Ingrese valor: ");
    scanf("%d", &valor);

    for (i = 0; i < valor ; i++){
        printf("\nIngrese base: ");
        scanf("%d", &base);
        printf("Ingrese altura: ");
        scanf("%d", &altura);
        superficie = base * altura / 2;
        printf("La superficie de este triangulo es: %d  \n", superficie);
        if (superficie > 12){
            cont++;
        }
    }
    printf("La cantidad de triangulos con superficie mayor a 12 son: %d", cont);




    return 0;
}