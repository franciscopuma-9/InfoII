#include <stdio.h>
#define TAM 5


void carga(float alt[TAM]){
    for(int x = 0; x < TAM; x++){
        printf("Ingrese su altura: ");
        scanf("%f",&alt[x]);
    }
}
float calcularPromedio(float alt[TAM]){
    float prom = 0;
    for(int x = 0; x < TAM; x++){
        prom +=alt[x];
    }
    return prom/TAM;
}
void altasBajas(float alt[TAM], float prom){
    int altas = 0;
    int bajas = 0;
    for(int x = 0; x < TAM; x++){
        if(alt[x]> prom){
            altas++;
        }
        else
        {
            bajas++;
        }        
    }
    printf("El promedio es:%.2f",prom);
    printf("\nAltas: %d\nBajas: %d", altas, bajas);
}

int main(void){
    float alt[TAM];
    carga(alt);
    altasBajas(alt, calcularPromedio(alt));




    return 0;
}