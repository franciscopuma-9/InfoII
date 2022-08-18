#include <stdio.h>

int main(){

    char nombre[20];
    int x = 0, cant = 0;


    printf("Ingrese nombre: ");
    gets(nombre);

    /*
    for (x = 0; x < 21; x++){
        if (nombre[x] == 'a' || nombre[x] == 'e' || nombre[x] == 'i' || nombre[x] == 'o' || nombre[x] == 'u'){
            cant++;
        }
    }
    */
  
    while (nombre[x]!='\0'){
    if (nombre[x] == 'a' || nombre[x] == 'e' || nombre[x] == 'i' || nombre[x] == 'o' || nombre[x] == 'u'){
            cant++;
        }
        x++;

    }
    printf("La cantidad de vocales es: %d",cant);



    return 0;
}