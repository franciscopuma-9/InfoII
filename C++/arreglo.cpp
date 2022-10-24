#include <iostream>

using namespace std;

class Arreglo{
    private:
        int * p;
        int T;

    public:
        Arreglo(int a=10);
        //Arreglo(const Arreglo & b);
        ~Arreglo();
        Arreglo operator= (const Arreglo &);

};

Arreglo::Arreglo(int a){
    if( a < 1){
        T = 10;
    }
    else
    {
        T = a;
    }
    p = new int [T]; //memoria dinamica
}
Arreglo::~Arreglo(){
    delete [] p; //libera memoria asignada al puntero p. [] para que sepa que es un vector, sino solo libera la primer posicion de memoria
}
Arreglo Arreglo:: operator=(const Arreglo &o){
    //T = o.T;
    //p = o.p;
    if (T == o.T)
        for(int i = 0; i < T;i++)
        {
            p[i]= o.p[i];
        }
    else
    {
        delete [] p;
        T = o.T;
        p = new int[o.T];
        for(int i = 0; i < T;i++)
        {
            p[i]= o.p[i];
        }
    }
    return *this; //devuelve el objeto actual(this es un puntero de referencia al objeto actual)
}


    
int main(){





    return 0;
}