#include <stdio.h>


void ingresar(char palabra[20]){
    printf("Ingrese su palabra: ");
    gets(palabra);
}
void vocales(char palabra[20]){
    int x = 0;
    int cont = 0;
    while (palabra[x] != '\0')
    {
        if(palabra[x]=='a'||palabra[x]=='e'||palabra[x]=='i'||palabra[x]=='o'||palabra[x]=='u'
        || palabra[x]=='A'||palabra[x]=='E'||palabra[x]=='I'||palabra[x]=='O'||palabra[x]=='U'){
            cont++;
        }
    x++;
    }
    
    printf("La cantidad de vocales de la palabra %s es: %d", palabra, cont);
}
int main (){
    char palabra[20];
    ingresar(palabra);
    vocales(palabra);



    return 0;
}