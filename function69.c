#include <stdio.h>
#define TAM 5


void carga(int vector[TAM]){
    for(int x = 0; x < TAM; x++){
        printf("Ingrese valor: ");
        scanf("%d", &vector[x]);
    }
}
float promedio(int vector[TAM]){
    float prom = 0;
    for(int x = 0; x < TAM; x++){
        prom +=vector[x];
    }
    return (prom / TAM);
}
void mayorPromedio(int vec1[TAM], int vec2[TAM]){
    if (promedio(vec1) == promedio(vec2)){
        printf("Los dos cursos tienen el mismo promedio.");
    }
    else
    {
        if (promedio(vec1) > promedio(vec2)){
            printf("El curso A tiene mayor promedio.");
        }
        else
        {
            printf("El curso B tiene mayor promedio.");
        }
    }       
}


int main(){
    int cursoA[TAM];
    int cursoB[TAM];
    printf("Ingrese notas del curso A.\n");
    carga(cursoA);
    printf("El promedio del curso A es: %.2f\n",promedio(cursoA));
    printf("Ingrese notas del curso B.\n");
    carga(cursoB);
    printf("El promedio del curso B es: %.2f\n",promedio(cursoB));


    mayorPromedio(cursoA, cursoB);

    return 0;
}