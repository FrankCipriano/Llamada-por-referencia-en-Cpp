#include <stdio.h>
#include <iostream>
using namespace std;

void elevarAlCubo(int *);
int main(){
    int numero=5;
    cout<<"El valor original del numero es: "<<numero;
    elevarAlCubo(&numero);
    cout<<"\nEl nuevo valor de Cubo es: "<<numero;
    return 0;
}
void elevarAlCubo(int *ptrnumero){
    *ptrnumero = *ptrnumero * *ptrnumero * *ptrnumero;
}