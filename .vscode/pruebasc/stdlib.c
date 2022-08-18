#include <stdio.h>
#include <stdlib.h>
/*
atoi (cadena)  string to int
atof (cadena)  string to float
gcvt (float, cantcaracteres, cadena) float to string
*/

int main (void){

    char *cadena;
    cadena = "121.343456";
    float num = atof(cadena);
    printf("%f", num);
    char buff[100];
    gcvt(num, 7, buff);
    printf("\n%s", buff);
    return 0;
}