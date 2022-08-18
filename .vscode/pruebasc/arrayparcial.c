#include <stdio.h>
#include <string.h>

int main (){
    
    int cant;
    printf("Ingrese cantidad de nombres a ingresar: ");
    scanf("%d", &cant);
    char nombres[10][20];
    fflush(stdin);
    for (int x = 0; x < cant; x++){
        printf("Ingrese nombre: ");
        gets(nombres[x]);
    }
    char aux[20];
    for (int i = 0; i < cant - 1; i++){
        for (int j = 0; j < cant - 1; j++){
            if (strcmp(nombres[j], nombres[j+1]) > 0){
                strcpy (aux, nombres[j]);
                strcpy (nombres[j], nombres[j+1]);
                strcpy (nombres[j+1], aux);
            }
        }
    }    
    for (int x = 0; x < cant; x++){
        printf("%s\n", nombres[x]);
    }

    return 0;
}