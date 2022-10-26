#include <iostream>

using namespace std;

class Rectangulo {
protected:
    float altura;
    float base;
public:
    Rectangulo();
    Rectangulo(float a, float b);
    bool esCuadrado(void);
    float Perimetro(void);
    float Area(void);
    void Mostrar(char c);
    void setAltura(float);
    void setBase(float);
    int get_amout_inside(float a, float b);
    int getAltura(void);
    int getBase(void);
};
Rectangulo::Rectangulo(){
    altura = 1;
    base = 1;
}
Rectangulo::Rectangulo(float a, float b){
    if (a <= 0 || b <= 0){
        cout << "Solo se admiten numeros mayores a 0.\n";
    }
    altura = a;
    base = b;
}
bool Rectangulo::esCuadrado(void){
    if (altura == base){
        return true;
    }
    else {
        return false;
    }
}
float Rectangulo::Perimetro(void){
    return (2*altura + 2*base);
}
float Rectangulo::Area(void){
    return (altura*base);
}
void Rectangulo::Mostrar(char c){
    for (int x = 0; x < altura; x++){
        for (int i = 0; i < base; i++){
            cout << c;
        }
        cout << "\n";
    }
    cout << endl;
}
void Rectangulo::setAltura(float alt){
    altura = alt;
}
void Rectangulo::setBase(float bas){
    base = bas;
}
int Rectangulo::get_amout_inside(float a, float b){
    int cant;
    cant = Area()/(a*b);
    return cant;
}
int Rectangulo::getAltura(void){
    return altura;
}
int Rectangulo::getBase(void){
    return base;
}

// int main (){

//     Rectangulo r1, r2(3,4);
//     if (r1.esCuadrado()){
//         cout <<"Es cuadrado"<< endl;
//     }
//     else{
//         cout <<"No es cuadrado"<< endl;
//     }
//     cout << "Perimetro: "<< r2.Perimetro() << endl;
//     cout << "Area: " << r2.Area()<< endl;
//     r2.Mostrar('*');
//     r1.setAltura(4.5);
//     r1.setBase(3.2);
//     if (r1.esCuadrado()){
//         cout <<"Es cuadrado"<< endl;
//     }
//     else{
//         cout <<"No es cuadrado"<< endl;
//     }
//     cout << "Perimetro: "<< r1.Perimetro()<< endl;
//     cout << "Area: " << r1.Area()<< endl;
//     r1.Mostrar('-');


//     return 0;
// }