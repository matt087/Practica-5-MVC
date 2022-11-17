#include "vista.h"

Vista::Vista()
{
    controlador = new Controlador();
}

void Vista::actualizarNota()
{
    int nota = 0, num;
    do
    {
        cout<<"\nIngrese el número de nota que desea cambiar: ";
        cin>>num;
        if(num<1 || num>3)
            cout<<"Inténtelo nuevamente\n"<<endl;
    } while(num<1 || num>3);
    do {
        cout << "Ingrese la nota a cambiar: ";
        cin >> nota;
    }while (nota < 0 || nota > 10);
    controlador->actualizaNota(num, nota);
    cout << "Nota "<<num<<" actualizada!" << endl;
}

void Vista::imprimir()
{
    cout << controlador->visualizar();
}

void Vista::ayudaNota()
{
    cout<<"Nota "<<controlador->ayuda()<<" cambiada"<<endl;
}

void Vista::mostrarEstado()
{
    cout << controlador->estado()<<endl;
}









