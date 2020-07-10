#include <iostream>
using namespace std;
void saludar(int contador)
{
contador++;
if (contador<5)
{
    
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