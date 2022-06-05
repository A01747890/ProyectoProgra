#include <iostream>

#ifndef PROGRAMA_HPP
#define PROGRAMA_HPP
using namespace std;

class Programa{

    private:
    string ID;
    string Nombre;
    double Calificacion;
    int Duracion;
    string FechaEstreno;

    public:

    Programa();
    Programa(string ID, string Nombre, double Calificacion,int Duracion, string FechaEstreno);
    void ImprimePrograma();
    string getID(){return ID;}
    string getNombre(){return Nombre;}
    double getCalificacion(){return Calificacion;}
    int getDuracion(){return Duracion;}
    string getFechaEstreno(){return FechaEstreno;}



};

#endif