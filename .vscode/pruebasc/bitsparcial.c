#include <stdio.h>
#include "stdint.h"


int main (void){

    uint16_t dato, mascara;
    mascara = 0b1000100001000;
    //dato = dato ^ mascara;
    dato ^= mascara;
    


    return 0;
}