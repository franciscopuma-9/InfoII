#include <stdio.h>

using namespace std;

class Complejo {
    double real, imag;
public:
    Complejo(double r=0, double i=0){real = r; imag = i;}
    Complejo(const Complejo & c){real = c.real; imag= c.imag;}
    void Set(double r=0, double i=0){real = r; imag = i;}
    double getR(void){return real;}
    double getI(void){return imag;}
    
};

int main (){



    return 0;
}