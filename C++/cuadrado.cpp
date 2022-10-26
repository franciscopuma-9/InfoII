#include <iostream>
#include "rectangulo.cpp"

using namespace std;

class Cuadrado: public Rectangulo{

public:
    Cuadrado(float a);
    void setLado (float a);
};

Cuadrado::Cuadrado(float a){
    altura = a;
    base = a;    
}
void Cuadrado::setLado(float a){
    altura = a;
    base = a;
}


int main (){

    Cuadrado c1(4);
    c1.setAltura(4);
    c1.setBase(4);
    if (c1.esCuadrado()){
        cout <<"Es cuadrado"<< endl;
    }
    else{
        cout <<"No es cuadrado"<< endl;
    }
    cout << "Perimetro: "<< c1.Perimetro()<< endl;
    cout << "Area: " << c1.Area()<< endl;
    c1.Mostrar('-');
    cout << c1.get_amout_inside(2,2);
    cout << "Altura: "<< c1.getAltura()<<"\nBase: "<< c1.getBase() << endl;


    Rectangulo r1(8,4);
    cout << r1.get_amout_inside(4,48);



    return 0;
}
