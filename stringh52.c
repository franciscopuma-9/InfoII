#include <stdio.h>
#include <string.h>

int main(void){

    char nom1[20];
    char nom2[20];
    
    printf("Ingrese nombre: ");
    gets(nom1);
    printf("Ingrese nombre: ");
    gets(nom2);



    if (strcmp(nom1, nom2) < 0){
        printf("%s\n%s",nom1,nom2);
    }
    else
    {
        printf("%s\n%s",nom2,nom1);
    }
    


    return 0;
}