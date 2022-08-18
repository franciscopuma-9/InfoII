#include <stdio.h>

int main(){

    int i, edad, promma, promta, promno;
    int summa = 0, sumta = 0, sumno = 0;


    for (i = 0; i < 5; i++){
        printf("Ingrese edad de turno maniana: ");
        scanf("%d", &edad);
        summa += edad;
    }
    for (i = 0; i < 6; i++){
        printf("Ingrese edad de turno tarde: ");
        scanf("%d", &edad);
        sumta += edad;
    }
    for (i = 0; i < 11; i++){
        printf("Ingrese edad de turno noche: ");
        scanf("%d", &edad);
        sumno += edad;
    }
    promma = summa / 5;
    promta = sumta / 6;
    promno = sumno / 11;
    printf("\nPromedio maniana:%d\nPromedio tarde:%d\nPromedio noche:%d\n", promma, promta, promno);

    if (promma < promta && promma < promno)
    {
        printf("La maniana tiene menor promedio de edad.");
    }
    else
    {
        if(promta < promma && promta < promno){
            printf("La tarde tiene menor promedio de edad");
        }
        else
        {
            printf("La noche tiene menor promedio de edad");
        }
    }
    
    


    return 0;
}