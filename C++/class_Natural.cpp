
#include <iostream>

#include "Natural.h"
#include "Natural.cpp"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	//crear objeto mediante constructor por defecto:
	Natural a;
	cout << a.Mostrar();
	a.setN(10);
	cout << a.Mostrar();
	//el metodo set permite controlar los valores que se pueden asignar al objeto:
	a.setN(-4);
	cout << a.getN()<<endl;
	a.setN(4);
	//Crear objeto mediante constructor ordinario
	Natural b(20);
	cout << b.Mostrar();

	//Crear objeto mediante constructor de copia:
	Natural c = b;
	cout << c.Mostrar();

	//operaciones con objetos Natural:
	//mediante metodo Suma
	cout << "valores: a: "<<a.getN()<<", b: "<<b.getN()<<endl;
	cout<<"a+b:";
	c = a.Suma(a,b);//c = a+b
	cout << c.Mostrar();

	//mediante operadores
	c = a + b;
	cout << c.Mostrar();
	cout<<"a-b:";
	c = a - b;
	cout << c.Mostrar();






	return 0;
}