#include <iostream>
using namespace std;

int main(){

    cout<<"Hola mundo";
    std::cout<<"hola mundo\n";
    int a;
    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<a;
    for ( int x = 1;x<=10;x++ ){
    cout<<"\n"<<a+x;
    }
    return 0;
}