#include <stdio.h>


int main(){

    char x;


    for ( x = 'A'; x < 'Z';x++){
        printf("%c ",x);
    }
    printf("\n\n");
    for ( x = 'a'; x < 'z';x++){
        printf("%c ",x);
    }

    return 0;
}