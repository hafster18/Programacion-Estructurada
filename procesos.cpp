#include <iostream>
//bibliotecas
#include <string>
#include <locale.h>
#include <windows.h> 
using namespace std;

/*implementacion*/
void saludar(string nombre)
{
    cout<<"Hola: "<<nombre<<endl;
}

//una funcion lleva un tipo de datos, como double
double sumar(double numero1, double numero2)
{
    double suma;
    suma=numero1+numero2;
return suma;

}

/*Los procedimientos y funciones van antes del main*/
/* llamamiento*/
//procedimiento siempre lleva void
//los demas son funciones y se retorna algo
int main ()
{
    double numero1,numero2,suma=0;
    string nombre;
    setlocale(LC_ALL, "Spanish");

    saludar("Maxs");
    cout<<"Ingrese el nombre"<<endl;
    getline(cin,nombre);
    //getline = funcion del sistema sustituye cin para String
    saludar(nombre);
    cout<<"Ingrese el numero 1:  ";
    cin>>numero1;
    cout<<"Ingrese el numero 2:  ";
    cin>>numero2;
    //llamamiento de la funcion sumar
    suma=sumar(numero1,numero2);
    cout<<"La suma es:  "<<suma<<endl;



    return 0;
}