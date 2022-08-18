#include <stdio.h>
#include <string.h>

int main(void){

    char palabra[20];
    

    printf("Ingrese una palabra: ");
    gets(palabra);
    printf("La palabra tiene %d caracteres", strlen(palabra));


    return 0;
}