#include <iostream>

using namespace std;

int Potencia(int a){return a*a;}

void Potencia(int *p){*p = *p * *p;}


int main (){
    int p;
    p = 4;
    Potencia(p);
    cout<< *p;

    return 0;
}