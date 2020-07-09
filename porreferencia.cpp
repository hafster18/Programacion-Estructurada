#include <iostream>
using namespace std;
//referencia por la posicion
void referencia (int numero1, int& numero2) //parametros por referencia cuando lleva un asperson
{
cout<<"Numero 1:  "<<numero1<<endl;
cout<<"Numero 2:  "<<numero2<<endl;
numero1=1;
numero2=100;
}
int main ()
{
int numero1, numero2;
cout<<"Ingrese el numero 1: ";
cin>>numero1;
cout<<"Ingrese el numero 2: ";
cin>>numero2;
referencia(numero1,numero2);
cout<<"Numero 1:  "<<numero1<<endl;
cout<<"Numero 2:  "<<numero2<<endl;

    return 0;
}