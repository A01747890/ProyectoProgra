#include <iostream>
#include <vector>
#ifndef SERIE_HPP
#define SERIE_HPP
#include "Episodio.hpp"
using namespace std;

class Serie{
    private:
        string ID;
        string Nombre;
        string Genero;
        vector<Episodio*>EpisodiosSerie;
    public:
        Serie();
        Serie(string ID, string Nombre,string Genero);
        void AñadirEp(Episodio*Epi);
        void ImprimePrograma();


};

#endif