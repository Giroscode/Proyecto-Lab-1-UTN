#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED


struct cuenta{

    int nrocuenta;
    char tipo;
    int idcliente;
    char nombrecliente[30];
    float saldo;

};

void listarCuentas(cuenta *C,int pos);

void iniciar(cuenta *c){

    for(int i=0;i<MAXCUENTA;i++){
        c[i].idcliente=0;
        c[i].tipo=' ';
        for(int j=0;j<31;j++)c[i].nombrecliente[j]=' '; ///OJO!!! 31
        c[i].saldo=0;
    }
}

bool verificarNumeroRepetido(cuenta *C, int cont, int num){

    for(int i=0;i<cont;i++){
        if(C[i].nrocuenta==num)return true;
    }
    return false;
}

void agregarCuenta(cuenta *C, int &cont){

    /// AGREGA LOS CAMPOS AL VECTOR CUENTA, EN LA POS cont

    system("cls");

    if(cont>=9){

            printf("NO PUEDE CARGAR MAS CUENTAS\n");
            system("pause");
            return;
    }

    int aux=0;
    printf("Ingrese el numero de cuentan\n");
    cin>>aux;

    if(aux<1000 || aux>9999){

        printf("ERROR: EL INCORRECTO\n");
        system("pause");
        return;

    }


    if(verificarNumeroRepetido(C,cont,aux)){

        printf("ERROR: EL NUMERO ESTA REPETIDO\n");
        system("pause");
        return;

    }

    C[cont].nrocuenta = aux;
    cont++;
}


int buscarPosCodigo(cuenta *C,int &cont,int cod){

    int pos=0;

    for(int i=0;i<cont;i++){

        if(C[i].nrocuenta==cod)return pos;

        pos++;
    }

    return -1;
}

void listarTodasCuentas(cuenta *C, int &cont){

    if(cont==0){
        printf("No hay nada que listar...\n");
        system("pause");
        return;
    }

    for(int i=0;i<cont;i++)listarCuentas(C,i);
}

void listarCuentas(cuenta *C,int pos){

    system("cls");
    printf("Nro Cuenta: %d\nTipo: %c\nID Cliente: %d\nNombre Cliente: %s\nSaldo: %.2f",C[pos].nrocuenta,C[pos].tipo,C[pos].idcliente,C[pos].nombrecliente,C[pos].saldo);

        ///cout << "Nro Cuenta:"<<C[i].nrocuenta<<endl;

    printf("\n");
    system("pause");

}


void listarCuentaCodigo(cuenta *C, int &cont){

    int aux,pos;
    system("cls");
    printf("Ingrese el codigo de cuenta\n");
    cin>>aux;

    pos=buscarPosCodigo(C,cont,aux);

    if(pos!=-1){

        listarCuentas(C,pos);

    }else{

        printf("ERROR; CODIGO INEXISTENTE");
        system("pause");

    }


}


void menuC(cuenta *C,int &cont){

    int op;
    system("cls");
    cout<<"MENU CUENTAS"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"1 - AGREGAR NUEVA CUENTA "<<endl;
    cout<<"2 - LISTAR CUENTA POR CODIGO "<<endl;
    cout<<"3 - LISTAR TODAS LAS CUENTAS "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"0 - SALIR "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"OPCION: "<<endl;

    cin>>op;

    switch(op){

    case 1:

        agregarCuenta(C,cont);

        break;

    case 2:

        listarCuentaCodigo(C,cont);

        break;

    case 3:

        listarTodasCuentas(C,cont);

        break;

    case 0:

        break;

    }

}




#endif // CUENTA_H_INCLUDED
