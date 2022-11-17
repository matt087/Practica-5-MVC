#include "controlador.h"

Controlador::Controlador()
{
    this->modelo = new Estudiante("Ariel", 5, 7, 9);
}

float Controlador::promedio()
{
    return (modelo->getNota1() + modelo->getNota2() + modelo->getNota3()) / 3.0;
}

void Controlador::actualizaNota(int nota, int valor)
{
    switch (nota) {
    case 1:
        modelo->setNota1(valor);
        break;
    case 2:
        modelo->setNota2(valor);
        break;
    case 3:
        modelo->setNota3(valor);
        break;
    }
}

string Controlador::visualizar()
{
    string str = "\nEstudiante: " + modelo->getNombre() + "\n" +
            " Nota 1: " + to_string(modelo->getNota1()) + "\n" +
            " Nota 2: " + to_string(modelo->getNota2()) + "\n" +
            " Nota 3: " + to_string(modelo->getNota3()) + "\n" +
            " Promedio: " + to_string(promedio()) + "\n";
    return str;
}

string Controlador::ayuda()
{
    string menor;
    if(modelo->getNota1()<modelo->getNota2() && modelo->getNota1()<modelo->getNota3())
    {
        menor="1";
        modelo->setNota1(modelo->getNota1()+2);
    }
    else if (modelo->getNota2() < modelo->getNota3() && modelo->getNota2()<modelo->getNota1())
    {
        menor="2";
        modelo->setNota2(modelo->getNota2()+2);
    }
    else
    {
       menor="3";
       modelo->setNota3(modelo->getNota3()+2);
    }
    return menor;
}

string Controlador::estado()
{
    string est;
    if(this->promedio()>=7)
        est = "\nEl estudiante está aprobado";
    else if (this->promedio()==6)
        est = "\nEl estudiante está suspendido";
    else if (this->promedio()<6 && this->promedio()>=2)
        est = "\nEl estudiante va a remedial";
    else
        est = "\nEl estudiante está reprobado";
    return est;
}













