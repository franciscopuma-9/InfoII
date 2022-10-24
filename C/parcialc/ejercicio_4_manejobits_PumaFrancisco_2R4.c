//Francisco Puma Legajo:75871 Curso: 2R4
#include <stdio.h>

struct r { //creo el campo de bits donde guardo una posicion de memoria para el bit4 
	unsigned char : 4;
	unsigned short int b4 : 1;
	unsigned char : 3;
};


int main(void) {
	
	struct r r1; //declaro la variable r1 tipo struct r
	struct r r2; //declaro la variable r2 tipo struct r
 	
	r1.b4 = 0;	//inicializo el bit4 en 0 en r1
	r2.b4 = 0;  //inicializo el bit4 en 0 en r2
	
	while(1){ //creo el bucle infinito 
		if (r2.b4 = 0){	//utilizo un if para saber si el bit4 esta en 0 y poder modificarlo a 1
			r2.b4 = 1;
		}
		else
		{
			if(r2.b4 = 1){ //utilizo un if para saber si el bit4 esta en 1 y poder modificarlo a 0
				r2.b4 = 0;
			}
		}
	}
	
	return 0;
}

