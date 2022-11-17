#include <iostream>

// #include "estudiante.h"
// #include "controlador.h"

#include "vista.h"

using namespace std;

int main()
{
    cout << "-- REGISTRO DE NOTAS --" << endl;

    /*
    Estudiante e;
    cout << e.toString();

    Controlador c;
    cout << c.visualizar();
    */

    Vista *vista = new Vista();

    int opc;
    do
    {
        cout << "\nMENU PRINCIPAL\n";
        cout << "1. Mostrar datos" << endl;
        cout << "2. Actualizar nota" << endl;
        cout << "3. Ayuda académica" << endl;
        cout << "4. Estado"<<endl;
        cout << "5. Salir" << endl;
        // Validar opcion del menu
        do
        {
            cout << "\nIngrese su opción: ";
            cin >> opc;
        } while(opc < 1 || opc > 5);
        // Operaciones
        switch (opc)
        {
            case 1:
            {
                vista->imprimir();
                break;
            }
            case 2:
            {
                vista->actualizarNota();
                break;
            }
            case 3:
            {
                vista->ayudaNota();
                break;
            }
            case 4:
            {
                vista->mostrarEstado();
                break;
            }
            case 5:
            {
                cout<<"Bye bye"<<endl;
                break;
            }
            default:
            {
                cout << "Opción no válida!" << endl;
                break;
            }
        }
    } while(opc!=5);
    return 0;
}





