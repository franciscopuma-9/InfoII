#include <stdio.h>

int main(){

    int i, valor, lado1, lado2, lado3; 
    int contequi = 0, contiso = 0 , contesca = 0;

    printf("Ingrese valor: ");
    scanf("%d", &valor);

    for (i = 0; i < valor ; i++){
        printf("\nIngrese primer lado: ");
        scanf("%d", &lado1);
        printf("Ingrese segundo lado: ");
        scanf("%d", &lado2);
        printf("Ingrese tercer lado: ");
        scanf("%d", &lado3);
        if ( lado1 == lado2 && lado1 == lado3){
            printf("Es un triangulo equilatero.");
            contequi++;
        }
        else
        {
            if (lado1 != lado2 && lado1!=lado3){
                printf("Es un triangulo escaleno.");
                contesca++;

            }
            else
            {
                printf("Es un triangulo isosceles.");
                contiso++;
            }
            
        }
        
        
    }
    printf("\nEquilatero:%d\nIsosceles:%d\nEscaleno:%d\n", contequi, contiso, contesca);
    if (contequi < contesca && contequi < contiso){
        printf("Equilatero son los que menos hay.");
    }
    else
    {
        if (contiso < contesca && contiso < contequi){
            printf("Isosceles son los que menos hay.");
        }
        else
        {
            printf("Escaleno son los que menos hay.");
        }
        
    }
    

    return 0;
}