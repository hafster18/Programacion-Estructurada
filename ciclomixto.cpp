#include <iostream>
#include <string>
using namespace std;
int main () 
{
    int numeroCuenta, numeroCliente, contadorCliente=0, tipoMovimiento, numeroMovimiento, contadorTrans=0;
    string nombreCliente, respuesta;
    double valorMovimiento, saldoFinal=0, saldoInicial=1000;

    do
    {
        
        cout<<"Ingrese la Cuenta:  ";
        cin>>numeroCuenta;
        cout<<"Ingrese el numero de Cliente:  ";
        cin>>numeroCliente;
        cout<<"Ingrese el Nombre del cliente:  "<<endl;
        cin>>nombreCliente;
        saldoFinal=saldoInicial;
        cout<<"Su saldo inicial es:  "<<saldoFinal<<endl;
        cout<<"Ingrese el numero de movimientos que hara:  ";
        cin>>numeroMovimiento;
            for(int i=0; i<numeroMovimiento; i++)
            {
                cout<<"1 - Debito"<<endl;
                cout<<"2 - Credito"<<endl;
                cout<<"Selecciones el tipo de movimiento"<<endl;
                cin>>tipoMovimiento;
                cout<<"Ingrese el valor del movimiento:  ";
                cin>>valorMovimiento;
                       
                        switch (tipoMovimiento)
                        {
                        case 1:
                                saldoFinal+=valorMovimiento;
                            break;
                        case 2:
                                saldoFinal+=valorMovimiento;
                            break;
                        default:
                                cout<<"Opcion Invalido";
                            break;
                        }
                    contadorTrans++;
            }
            cout<<"Numero de cliente es:  "<< numeroCliente<<"Saldo Final:  "<<saldoFinal<<endl;
            contadorCliente++;

            cout<<"Desea seguir con otro cliente S/N"<<endl;
            cin>>respuesta;
    } while (respuesta == "S"  || respuesta == "s");
    cout<<"Numero de Clientes atendidos:  "<<contadorCliente<<endl;
    cout<<"Numero de transacciones realizados:  "<<contadorTrans;

    return 0;
}