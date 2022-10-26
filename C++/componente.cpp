#include <iostream>
using namespace std;

class Componente{
protected:
    int valor;
    int cant;
    string Nombre;
public:
    Componente();   
};
Componente::Componente(){
    valor = 0;
    cant = 0;
    Nombre = "Componente";
}
//herencia, utilizamos la clase hija Resistencia que tiene de clase padre a Componente
class Resistencia: Componente{ //se puede agregar private/public/protected, por defecto private
private:
    int tolerancia;
    int potencia;
public:
    Resistencia();
    ~Resistencia();
};
Resistencia::Resistencia()//:Componente(1,"res1:,1)para un constructor por valor//tambien se llama al constructor de la clase Componente
{
    tolerancia = 0;
    potencia = 0;
//Nombre = "Nombre"   //otra forma
//valor = 123;  
//cant = 456;
}
Resistencia::~Resistencia(){
    cout<<"Destruccion Resistencia";
}
int main() {

return 0;
}