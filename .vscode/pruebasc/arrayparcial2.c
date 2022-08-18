#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    
    int cant;    
    printf("Ingrese cantidad de nombres a ingresar: ");
    scanf("%d", &cant);
    fflush(stdin);    
    char *nombres[cant];
    char *buffer = (char*) malloc(sizeof(char) * 150);
    
    for (int x = 0; x < cant; x++){
        printf("Ingrese nombre: ");
                
        scanf("%s", buffer);

        int len = strlen(buffer);

        nombres[x] = (char *) malloc(sizeof(char) * (len + 1));

        strcpy(nombres[x], buffer);
    }
    free(buffer);

    char *aux;
    for (int i = 0; i < cant - 1; i++){
        for (int j = 0; j < cant - 1; j++){
            if (strcmp(nombres[j], nombres[j+1]) > 0){
                aux = nombres[j];
                nombres[j] = nombres[j+1];
                nombres[j+1] = aux;
            }
        }
    }    
    for (int x = 0; x < cant; x++){
        printf("%s\n", nombres + x);
    }

    return 0;
}