#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

double suma(double r, double i){
    double resu = r + i;
    return resu;
}

class Complejo {
    double real, imag;
public:
    Complejo(double r=0, double i=0){real = r; imag = i;}
    Complejo(const Complejo & c){real = c.real; imag= c.imag;}
    void Set(double r=0, double i=0){real = r; imag = i;}
    double getR(void){return real;}
    double getI(void){return imag;}
    Complejo sumar(Complejo &c);
    //sobrecarga
    Complejo operator+(Complejo &c);
    Complejo operator-(Complejo &c);
    Complejo operator=(Complejo &c);
    double abs(void);


friend Complejo sumar(Complejo &c, Complejo &d){
    Complejo e;
    e.real = c.real + d.real;
    e.imag = c.imag + d.imag;

    return e;
}
};

Complejo Complejo::operator+(Complejo &c){
    Complejo e;
    e.real = real + c.real;
    e.imag = imag + c.imag;
    return e;
}
Complejo Complejo::operator-(Complejo &c){
    Complejo e;
    e.real = real - c.real;
    e.imag = imag - c.imag;
    return e;
}
Complejo Complejo::operator=(Complejo &c){
    real = c.real; 
    imag= c.imag;
}

double Complejo::abs(void){
    double abs = (pow(real,2) + pow (imag,2));
    int m = 2;
    abs = sqrt(abs);
    return abs;
}

int main (){

    Complejo c1(3,4);

    cout << suma(c1.getR(),c1.getI());

    cout << c1.abs();


    return 0;
}