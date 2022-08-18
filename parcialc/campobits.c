#include <stdio.h>

//campo de bits
// no hace falta hacer operaciones a nivel de bits
struct r {
unsigned char :1; // campo vacio para que empiece en b1
unsigned char b1 : 1;
unsigned char:3; // campo vacio para acomodarlo
unsigned short int cuenta: 10;
unsigned char:5; // acomodar
char b20 : 1;

};
int main(void) {
    struct r r1;
    r1 = 0;
    short int v = 5;
    r1.cuenta = v;
    while(r1.b1 != 0){
        if(r1.b20 == 1);{
            r1.cuenta++;
        }
    }
    return 0;
}