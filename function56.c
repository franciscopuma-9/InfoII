#include <stdio.h>

void suma(){
    int num1, num2;
    
    printf("Ingrese primer valor:");
    scanf("%d", &num1);
    printf("Ingrese segundo valor:");
    scanf("%d", &num2);
    
    printf("La suma de los 2 numeros es: %d", num1 + num2);
}
void separacion(){
    printf("\n_________________________________\n");

}
int main(void){
        
    suma();
    separacion();
    suma();
    separacion();


    return 0;
}