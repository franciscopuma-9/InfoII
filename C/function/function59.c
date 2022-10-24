#include <stdio.h>

int area(int lado){
    return (lado * lado);
}
int perimetro(int lado){
    return (lado * 4);
}


int main(){

    int x;

    for (x = 10; x < 21; x++){
        printf("El area de %d es: %d\n", x, area(x));
    }
    for (x = 10; x < 21; x++){
        printf("El perimetro de %d es: %d\n", x, perimetro(x));
    }

    return 0;
}