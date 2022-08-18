#include <stdio.h>

int main(){
    int num1, num2, resultado;
    char operacion;

    printf("Ingrese primer valor: ");
    scanf("%d", &num1);

    printf("Ingrese segundo valor: ");
    scanf("%d", &num2);

    printf("Ingrese operacion deseada('+' '-' '*' '/'): ");
    scanf(" %c", &operacion);
    switch (operacion)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        resultado = num1 / num2;
        break;

    }
    printf("%d",resultado);
    return 0;
}