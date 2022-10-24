#include <stdio.h>
#include <string.h>

int main(void){

    char palabra[20],palabra1[20];
    

    printf("Ingrese primer palabra: ");
    gets(palabra);
    printf("Ingrese segunda palabra: ");
    gets(palabra1);
    if (strcmp(palabra,palabra1) == 0)
    {
        printf("Las cadenas son exactamente iguales.");
    }
    else 
    {
        if (strcmp(palabra,palabra1) > 0){
            printf("La primer cadena es mayor alfabeticamente");
        }
        else
        {
            printf("La segunda cadena es mayor alfabeticamente");
        }
        
    }

    return 0;
}