#include <stdio.h>

int main(){

    char nombre[20], nombre1[20];
    char nombre2[] = "francisco puma";
    printf("Ingrese nombre: ");
    scanf("%s",&nombre);
    printf("%s",nombre);
    fflush(stdin);
    printf("\nIngrese nombre: ");
    gets(nombre1);    
    printf("%s\n",nombre1);
    printf("%s",nombre2);



    return 0;
}