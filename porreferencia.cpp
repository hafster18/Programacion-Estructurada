#include <iostream>
using namespace std;
//referencia por la posicion
//parametros por referencia, valor, opcional
//int numero1 =5 es un parametro opcional
void referencia (int& numero2,int numero1 =5) //parametros por referencia cuando lleva un asperson
{
cout<<"Numero 1:  "<<numero1<<endl;
cout<<"Numero 2:  "<<numero2<<endl;
//numero1=1;
numero2=100;
}
int main ()
{
int numero1=0, numero2;
//cout<<"Ingrese el numero 1: ";
//cin>>numero1;
cout<<"Ingrese el numero 2: ";
cin>>numero2;
referencia(numero2);
cout<<"Numero 1:  "<<numero1<<endl;
cout<<"Numero 2:  "<<numero2<<endl;

    return 0;
}