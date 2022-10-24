#include <stdio.h>

int main(void){

    char palabra[40];
    int x = 0;

    printf("Ingrese palabra: ");
    gets(palabra);

    while(palabra[x] != '\0'){
        if(palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u'){
            palabra[x] = '-';
        }
        x++;
    }
    printf("%s",palabra);


    return 0;
}