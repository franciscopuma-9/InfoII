#include <stdio.h>

int main(){
    int porcentaje, cant, correct;

    printf("Ingrese la cantidad de preguntas: ");
    scanf("%d", &cant);
    printf("Ingrese la cantidad de preguntas respondidas correctamente: ");
    scanf("%d", &correct);
    porcentaje = correct * 100 / cant;

    if (porcentaje >= 90) {
        printf("Nivel maximo : %d%%", porcentaje);

    }
    else
    {
        if (porcentaje >= 75){
            printf("Nivel medio: %d%%", porcentaje);
        }
        else
        {
            if (porcentaje >= 50){
                printf("Nivel regular: %d%%", porcentaje);
            }
            else
            {
                printf("Fuera de nivel: %d%%", porcentaje);
            }
            
        }
        
    }
    

    return 0;
}