#ifndef VISTA_H
#define VISTA_H

#include <iostream>

#include "controlador.h"

using namespace std;

class Vista
{
private:
    Controlador *controlador;
public:
    Vista();
    void actualizarNota();
    void ayudaNota();
    void imprimir();
    void mostrarEstado();
};

#endif // VISTA_H
