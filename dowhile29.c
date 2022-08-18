#include <stdio.h>

int main(){

    float valor; 
    int total = 0, mayor = 0, menor = 0, medio = 0;

    do
    {
        printf("Ingrese peso de la pieza: ");
        scanf("%f", &valor);
        
        if (valor > 10.2){
            mayor++;
        }
        else {
            if (valor >= 9.8)
            {
                medio++;
            }
            else
            {
                if (valor > 0)
                {
                    menor++;
                }
                
                
            }
            
        }

    } while (valor !=0);
    total = medio + mayor + menor;
    printf("\nEntre 9.8 y 10.2:%d\nMenor de 9.8:%d\nMayor a 10.2:%d\n", medio, menor, mayor);
    printf("La cantidad total de piezas es de: %d", total);

    return 0;
}