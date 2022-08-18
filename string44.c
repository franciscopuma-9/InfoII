#include <stdio.h>

int main(void){

    char nombre[20];
    int x = 0;


    printf("Ingrese nombre: ");
    gets(nombre);

    while (nombre[x]!='\0'){
        
        x++;


    }
    printf("Cantidad de caracteres de %s son %d",nombre,x);



    return 0;
}