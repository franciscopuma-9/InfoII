#include <stdio.h>
#define TAM 5


void carga(int vector[TAM]){
    for(int x = 0; x < TAM; x++){
    printf("Ingrese valores de su vector: ");
    scanf("%d", &vector[x]);
    }
}
void sumatoria(int vector1[TAM], int vector2[TAM], int vector3[TAM]){
    for(int x = 0; x < TAM; x++){
        vector3[x] = vector1[x]+ vector2[x];
    }
}
void imprimir(int vector[TAM]){
     for(int x = 0; x < TAM; x++){
        printf("%d\t",vector[x]);
    }   
    printf("\n");
}




int main(){
    int vec1[TAM];
    int vec2[TAM];
    int vec3[TAM];

    printf("Cargue los datos del primer vector.\n");
    carga(vec1);
    printf("Cargue los datos del segundo vector.\n");
    carga(vec2);
    sumatoria(vec1, vec2, vec3);
    printf("MATRIZ\n");
    imprimir(vec1);
    imprimir(vec2);
    imprimir(vec3);
    

    return 0;
}