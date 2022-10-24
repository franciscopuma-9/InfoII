#include <stdio.h>
#include <string.h>

int main (void){
    
    char cad1[30] = "Francisco";
    char cad2[10] = "Puma";

    strcat(cad1," ");
    strcat(cad1,cad2);
    printf("%s", cad1);




    return 0;
}