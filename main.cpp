#include <iostream>

using namespace std;

#define MAXCUENTA 10
#define MAXMOV 20


#include<cstdlib>
#include<cstring>
#include <stdio.h>
#include"cuenta.h"
#include"movimiento.h"
#include"Reportes.h"



struct movi{

    int nromovimiento;
    int nrocuenta;
    char tipo;
    float importe;

};


int main()
{
    int contCu=0,contMov=0;
    cuenta C[10];
    movi M[20];

    iniciar(C);
    //iniciar(M);

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

        menuC(C,contCu);


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
