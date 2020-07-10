#include <iostream>
using namespace std;
//recusividad: se llama a si misma
//caso base: es el que me permite terminar la recursividad
//caso general: es l aque hace la recursividad8 
void saludar(int contador)
{
contador++;
if (contador<5)
{
    cout<<contador<<endl;
    saludar(contador);
}
else{
    cout<<"Hola"<<endl;
    
}

}

int main ()
{
    int contador=0;
    saludar(contador);

    return 0;
}