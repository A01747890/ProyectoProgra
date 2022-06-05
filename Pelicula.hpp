#include <iostream>
#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "Programa.hpp"
using namespace std;


class Pelicula: public Programa{

    private:
    string Genero;

    public:

    Pelicula ();
    Pelicula(string ID, string Nombre, double Calificacion,int Duracion, string FechaEstreno, string Genero);
    void ImprimePrograma();
};

#endif