#include <stdio.h>

int main(){

    int x = 0, n = 11;

    while (x < 25){
        printf("%d-", n);
        n += 11;
        x += 1;
    }


    return 0;
}