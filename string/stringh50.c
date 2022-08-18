#include <stdio.h>
#include <string.h>

int main(void){

    char nombre[31], nombre1[31], nombrelargo[31];
    

    printf("Ingrese nombre: ");
    gets(nombre);
    printf("Ingrese nombre: ");
    gets(nombre1);

    if (strlen(nombre) > strlen(nombre1)){
        strcpy(nombrelargo,nombre);
    }
    else
    {
        strcpy(nombrelargo, nombre1);
    }
    printf("%s", nombrelargo);


    return 0;
}