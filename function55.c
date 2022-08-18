#include <stdio.h>

// char saludo(){
//         printf("Este es el comienzo del programa.\n");
//     }
// int suma(){
//     int num1, num2;
//     printf("Ingrese primer valor:");
//     scanf("%d", &num1);
//     printf("Ingrese segundo valor:");
//     scanf("%d", &num2);
//     printf("La suma es: %d", num1 + num2);
// }
// char despedida(){
//     printf("\nEste es el fin del programa.");
// }
// int main(){

//     saludo();
//     suma();
//     despedida();


//     return 0;
// }
void saludo(){
    printf("Este es el comienzo del programa.\n");
    }
void suma(int num1, int num2){
    
    printf("La suma es: %d", num1 + num2);
}
void despedida(){
    printf("\nEste es el fin del programa.");
}
int main(){
    int num1, num2;
    saludo();
    printf("Ingrese primer valor:");
    scanf("%d", &num1);
    printf("Ingrese segundo valor:");
    scanf("%d", &num2);
    suma(num1, num2);
    despedida();


    return 0;
}