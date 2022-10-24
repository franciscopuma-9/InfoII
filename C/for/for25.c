#include <stdio.h>

int main(){

    int i, valor, x, y; 
    int contc = 0, cont1 = 0, cont2 = 0 , cont3 = 0, cont4 = 0;

    printf("Ingrese valor: ");
    scanf("%d", &valor);

    for (i = 0; i < valor ; i++){
        printf("\nIngrese valor de x: ");
        scanf("%d", &x);
        printf("Ingrese valor de y: ");
        scanf("%d", &y);
        
        if ( x == 0 && y == 0){
            printf("Esta en el centro.");
            contc++;
        }
        else
        {
            if ( x >= 0 && y >= 0){
                printf("Primer cuadrante.");
                cont1++;

            }
            else
            {
                if (x <= 0 && y >=0){
                    printf("Segundo cuadrante.");
                    cont2++;
                }
                else
                {
                    if (x <= 0 && y <=0){
                        printf("Tercer cuadrante.");
                        cont3++;
                    }
                    else
                    {
                        printf("Cuarto cuadrante.");
                        cont4++; 
                    }
                    
                }
                
            }
            
        }
        
        
    }
    printf("\nCentro:%d\nPrimer:%d\nSegundo:%d\nTercer:%d\nCuarto:%d\n",contc, cont1, cont2, cont3, cont4);
 
    

    return 0;
}