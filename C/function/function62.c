#include <stdio.h>

void carga(int vector[5]){
    for(int x = 0; x < 5; x++){
        printf("Ingrese valor: ");
        scanf(" %d", &vector[x]);
    }
}

void impresion(int vector[5 ]){
    printf("Contenido completo del vector.\n");
    for(int x = 0; x < 5; x++){
        printf("%d\n", vector[x]);
        
    }
}


int main (){
    int vector[5];
    carga(vector);
    impresion(vector);

    return 0;
}