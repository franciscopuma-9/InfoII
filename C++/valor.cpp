#include <iostream>

using namespace std;

// int cuadrado_valor(int a){return a * a;} //paso por valor
// int cuadrado_ptr(int *p){return *p * *p;} //paso por ptr
// int cuadrado_ref(int &b){return b * b;}//paso por referencia


int cuadrado(int a){return a * a;}//sobrecarga de funciones
int cuadrado(int *p){return *p * *p;}
//int cuadrado_ref(int &b){return b * b;} //esta sobrecarga no funciona por error de ambiguedad, hay que cambiarle el nombre
int cuadrado_ref(const int &r){ //se pone const para no alterar la variable
    //r = 0;
    return r * r;
}




void cuad(int &a){a = a*a;}
void cuad(int *a){*a = *a * *a;}


int main (){

    int a = 2;
    int &b = a;

    int res = 0;


    const float pi = 3.14f; //seccion del codigo en la parte baja de data entre el text
    // res = cuadrado_valor(a);
    // cout<<res<<endl;
    // res = cuadrado_ptr(&a);
    // cout<<res<<endl;
    
    // res = cuadrado_ref(a);
    // cout<<res<<endl;

    res = cuadrado(a);
    res = cuadrado(&a);

    res = cuadrado(b);
    res = cuadrado(&b);

    cuad(a);
    cout << a;
    cuad(&b);
    cout << b;


    return 0;
}


