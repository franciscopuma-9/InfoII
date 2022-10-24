#include <stdio.h>

int main(void){
    char palabra[30];
    
    printf("Ingrese palabra: ");
    gets(palabra);

    if (palabra[0]=='a'|| palabra[0] == 'A'){
        printf("\nLa palabra empieza en a/A");
    }
    else
    {
        printf("\nLa palabra no empieza en a/A");
    }
    



    return 0;
}