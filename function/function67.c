#include <stdio.h>
#define TAM 4
void cargar(float sueldos[TAM]){
    for(int x = 0; x < TAM; x++){
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldos[x]);
    }

}
float gastosTurno(float sueldos[TAM]){
    float gastos = 0;
    for(int x = 0; x < TAM; x++){
        gastos +=sueldos[x];
    }
    return gastos;
}

int main(void){
    float sueldosMa[TAM];
    float sueldosTa[TAM];
    printf("Carga de sueldos del turno maniana\n");
    cargar(sueldosMa);
    printf("Carga de sueldos del turno tarde\n");
    cargar(sueldosTa);
    printf("Gastos del turno de la maniana: %0.2f\n", gastosTurno(sueldosMa));
    printf("Gastos del turno de la tarde: %0.2f\n", gastosTurno(sueldosTa));

    return 0;
}