#include <iostream>
#include <vector>
#ifndef EPISODIO_HPP
#define EPISODIO_HPP
#include "Programa.hpp"
using namespace std;

class Episodio: public Programa{

    private:
    int TemporadaS;
    int NumEpisodio;

    public:

    Episodio();
    Episodio(string ID, string Nombre, double Calificacion,int Duracion, string FechaEstreno,int TemporadaS,int NUmEpisodio);
    void ImprimePrograma();


};

#endif