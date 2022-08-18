#include <stdio.h>

int main(void){
    char oracion[200];
    int x = 0, cont = 0;


    printf("Ingrese oracion: ");
    gets(oracion);

    while (oracion[x]!='\0'){
        if (oracion[x] == ' '){
            cont++;
        }
        x++;
    }
    printf("Cantidad de palabras son %d", cont + 1);

    return 0;
}