#include <stdio.h>

int main(){

    int i, valor; 
    int contneg = 0, contpos = 0 , contmult15 = 0, valoracum = 0;


    for (i = 0; i < 10 ; i++){
        printf("\nIngrese numero entero: ");
        scanf("%d", &valor);
    
        if ( valor < 0){
            contneg++;
            
        }
        else
        {
           contpos++;
            
        }
        if (valor % 15 == 0){
            contmult15++;
        }
        if (valor % 2 == 0){
            valoracum +=valor;
        }
        
    }
    printf("\nNegativos:%d\nPositivos:%d\nMultiplos de 15:%d\nSumatoria de numeros par:%d", contneg, contpos, contmult15,valoracum);
    
    

    return 0;
}