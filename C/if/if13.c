#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un valor positivo: ");
    scanf("%d", &num);

    if (num > 999){
        printf("Error, mas cantidad de cifras.");
    }
    else
    {
        if (num > 99){
            printf("3 cifras");
        }
        else
        {
            if (num > 9){
            printf("2 cifras");
        }
        else
        {
            printf("1 cifra");
        }
        
        }
        
    }
    
    return 0;
}