#include <stdio.h>

int main(){

    int x = 1 ,n;

    printf("Ingrese numero: ");
    scanf("%d", &n);

    while(x <=n){
        printf("%d ", x);
        x = x + 1;
    }


    return 0;
}