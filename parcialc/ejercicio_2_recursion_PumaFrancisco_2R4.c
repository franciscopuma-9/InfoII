//Francisco Puma Legajo:75871 Curso: 2R4
#include <stdio.h>


int suma (int n){
	if (n == 0 || n == 1)
		return n;    
	else
	{
		int respuesta = n + suma(n-1);
		//printf("n= %d\t Resultado parcial= %ld\n", n ,respuesta); //Se puede utilizar un printf para saber el valor de cada recursion
																	//pero tambien gasta mas recursos en cada llamado a la funcion
		return respuesta;
	}
}
	
	int main (void)
	{   
		printf("La funcion recursiva con 15 es: %ld", suma(15));
		return 0;
	}

/* n = 15 ->  15 + suma(14) Llega al resultado final de la recursion que es 120.
					  |				^
					  v				| retorna el valor de 14 + suma(13)
				n = 14  ->  14 + suma(13)
							.				^
(sucesivamente hasta llegar al caso base)   |
							.				|
							.				| retorna el valor de n, es decir 1
						n = 1 (caso base) 
	
	Prueba de impresion para ver cada recursion. En total hace 14 recursiones
	n= 2     Resultado parcial= 3
	n= 3     Resultado parcial= 6
	n= 4     Resultado parcial= 10
	n= 5     Resultado parcial= 15
	n= 6     Resultado parcial= 21
	n= 7     Resultado parcial= 28
	n= 8     Resultado parcial= 36
	n= 9     Resultado parcial= 45
	n= 10    Resultado parcial= 55
	n= 11    Resultado parcial= 66
	n= 12    Resultado parcial= 78
	n= 13    Resultado parcial= 91
	n= 14    Resultado parcial= 105
	n= 15    Resultado parcial= 120
*/
