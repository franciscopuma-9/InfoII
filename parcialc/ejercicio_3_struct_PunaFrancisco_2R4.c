//Francisco Puma Legajo:75871 Curso: 2R4
#include <stdio.h>
#include <stdlib.h>
#define TAM 10 //creo una constante simbolica que me agilizo la prueba del programa

struct fecha  //creo el registro de la fecha
{
	short int dd;
	short int mm;
	short int aa;
};

void carga(struct fecha *vec){  //funcion para la carga de valores de la fecha
	for(int x = 0; x < TAM; x ++){
		printf("Ingrese dia: ");
		scanf("%d", &vec[x].dd);
		printf("Ingrese mes: ");
		scanf("%d", &vec[x].mm);
		printf("Ingrese año: ");
		scanf("%d", &vec[x].aa);
		
	}
}
	
	int main (){
		struct fecha * vec; //creo un puntero de tipo struct fecha
		char *meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"}; //hago un array con la lista de los meses
		vec = malloc(sizeof(struct fecha)*TAM); //guardo memoria dinamica en el puntero
		carga(vec);//llamo a la funcion para cargar los valores
		
		for ( int x = 0; x < TAM; x++){ //utilizo un bucle para poder imprimer todas las fechas almacenadas en el puntero
			int mes = vec[x].mm - 1; //guardo en una variable el valor del mes para poder imprimirlo despues
			printf("%d de %s de %d\n", vec[x].dd, meses[mes], vec[x].aa); //imprimo la fecha ordenada con el mes puesto en palabras
		}

		
		
		
		
		return 0;
	}
