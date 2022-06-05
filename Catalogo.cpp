#include<iostream>
#include<vector>
#include "Catalogo.hpp"


using namespace std;

void Catalogo::GuardarProgramaP(Pelicula*Program){

    peliculas.push_back(Program);

}

void Catalogo::GuardarProgramaS(Serie*Program){

    series.push_back(Program);

}

void Catalogo::ImprimePrograma(){

    cout<<"Peliculas: "<<endl;

    for (int i=0;i<peliculas.size();i++){

        peliculas[i]->ImprimePrograma();
    }
    cout<<endl<<endl<<"Series: "<<endl;

    for (int i=0;i<series.size();i++){

        series[i]->ImprimePrograma();
    }
}

