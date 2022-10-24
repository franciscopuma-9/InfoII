#include <stdio.h>

void carga(int vector[6]){
    for(int x = 0; x < 6; x++){
        printf("Ingrese sueldo: ");
        scanf(" %d", &vector[x]);
    }
}

void impresion(int vector[6]){
    printf("Impresion de los sueldos.\n");
    for(int x = 0; x < 6; x++){
        printf("%d\n", vector[x]);
        
    }
}
void gastos(int vector[6]){
    int total = 0;
    for (int x = 0; x < 6; x++){
        total +=vector[x];
    }
    printf("Los gastos totales son: %d", total);
}

int main(){
    int vec[6];
    carga(vec);
    impresion(vec);
    gastos(vec);


    return 0;
}