#include <stdio.h>

long recu (long n){
    if (n == 0 || n == 1)
        return n;    
    else
    {
        long respuesta = recu(n-1) + 2*n-1;
        //printf("n= %d\t Resultado parcial= %ld\n", n ,respuesta); //Se puede utilizar un printf para saber el valor de cada recursion, pero tambien hace gastar mas recursos.
        return respuesta;
    }
}

int main (void)
{   
    printf("La funcion recursiva con 5 es: %ld", recu(5));
    return 0;

// recu(5) = 25       (valor final)
//                          ^
//                          | regresa 25
// n = 5 a recu(n-1) + 2*5 - 1 
//            |                     ^
//            v                     | regresa 16
//          n = 4 a recu(n-1) + 2*4 - 1
//                    |                     ^
//                    v                     | regresa 9
//                  n = 3 a recu(n-1) + 2*3 - 1
//                          |                   ^
//                          v                   | regresa 4
//                        n = 2 a recu(n-1) + 2*2 - 1  
//                                  |                   ^
//                                  v                   | regresa 1
//                                n = 1 Caso base                      
// n = 2 ---------- recu(n-1) + 2*2 -1  =  1 + 4 - 1 = 4
// n = 3 ---------- recu(n-1) + 2*3 -1  =  4 + 6 - 1 = 9
// n = 4 ---------- recu(n-1) + 2*4 -1  =  9 + 8 - 1 = 16
// n = 5 ---------- recu(n-1) + 2*5 -1  =  16 + 10 - 1 = 25