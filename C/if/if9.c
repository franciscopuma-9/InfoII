#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un valor: ");
    scanf("%d", &num);
    if (num > 9){
        printf("Tiene dos digitos");
    }
    else
    {
        printf("Tiene un digito");
    }




    return 0;
}