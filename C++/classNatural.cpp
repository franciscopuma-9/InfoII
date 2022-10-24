#include <iostream>
using namespace std;

class Natural
{
private:
    int n = 0;
public:
    //constructores
    Natural(){n = 0;} //constructor por defecto (sin argumentos)
    Natural(int a){setN(a);} //constructor ordinario (con argumentos)
    Natural(const Natural &a){setN(a.n);}//constructor de copia (cuando se crea un objeto a partir a otro)
    ~Natural(){}//destructor (cuando el objeto manipula memoria dinamica-- free()-delete)
    
    //metodos
    
    int getN(void);     //creo metodo getN (prototipo)
    void setN(int);     //creo metodo setN
    void Mostrar(void);
    Natural Suma(Natural a,Natural b){ return Natural(a.n+b.n);}//suma los n de 2 objetos
    //sobrecarga de operadores
    Natural operator+(Natural a){ return Natural(this->n + a.n);} //se puede utilizar el + directamente
	Natural operator-(Natural a){ return Natural(this->n - a.n);} //se puede utilizar el - directamente
    };

int Natural::getN(){ //creo su funcionalidad (implementacion)
    return n;
}
void Natural::setN(int a){ //creo su funcionalidad
    if (a > 0){
    n = a;
    }
    else{
        n = 0;
    }
}
void Natural::Mostrar(void){
    cout<<getN();
}



int main (){

    Natural n1;// creo el objeto n1, usando el constructor por defecto
    //Natural n2(8); se ejecuta el constructor ordinario
    Natural n2 = n1;//constructor de copia
    Natural n3(n1);//constructor de copia
    Natural n4;
    n1.setN(7);
    n4 = n4.Suma(n1,n2);//implementar Suma
    cout<<n4.getN();
    
    cout<<n1.getN();
    cout<<n3.getN();

    Natural n5;
    n5 = n1 + n2; //sobrecarga de operadores +
    return 0;

    return 0;
}