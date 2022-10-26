#include <iostream>

using namespace std;

int Potencia(int a){return a*a;} //por valor
//res = Potencia(a)

void Potencia(int *p){*p = *p * *p;} //por referencia de puntero //pone la potencia en la misma posicion de memoria
//res = Potencia(&p)

int Potencia_ref(int &r){r = r * r;} //por referencia 
//res = Potencia(a)  //puede tener problemas en sobrecarga de funciones porque se pasa igual que por valor

int main (){
    
    int a = 4;
    int *p = &a;

    Potencia(p);
    cout << *p<< endl;

    int b = 5;

    int res = Potencia(b); //valor
    cout << res << endl;

    Potencia(&b); // puntedo
    cout << b << endl;

    Potencia_ref(b);//por referencia
    cout << b << endl;

    




    return 0;
}