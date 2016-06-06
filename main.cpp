#include <iostream>

using namespace std;
#include<cstdlib>
#include<cstring>


struct cuenta{

int nrocuenta;
char tipo;
int idcliente;
char nombrecliente[30];
float saldo;

};

struct movi{

int nromovimiento;
int nrocuenta;
char tipo;
float importe;

};

const int cuentas=10;
const int mov=20;

int main()
{
    int opc;
    while(true){

     system("cls");

    cout<<"MENU PRINCIPAL "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"1 - CUENTAS "<<endl;
    cout<<"2 - MOVIMIENTOS "<<endl;
    cout<<"3 - REPORTES "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"0 - SALIR "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"OPCION: "<<endl;
    cin>>opc;

    switch(opc){

case 1:

    break;

case 2:

    break;

case 3:


    break;

case 0:

    return 0;
    break;

default:
        cout<<"---------------------------"<<endl;

    cout<<"NO SE INGRESO NINGUNA DE LAS OPCIONES , PUTO "<<endl;

        cout<<"---------------------------"<<endl;

    break;

    }
    }

    return 0;
}
