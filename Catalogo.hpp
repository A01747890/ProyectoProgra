#include<iostream>
#ifndef CATALOGO_HPP
#define CATALOGO_HPP
#include<vector>
#include "Programa.hpp"
#include "Pelicula.hpp"
#include "Serie.hpp"

using namespace std;

class Catalogo{

private:

vector <Pelicula*> peliculas;

vector <Serie*> series;


public:
void GuardarProgramaP(Pelicula*Program);
void GuardarProgramaS(Serie*Program);
void ImprimePrograma();


};
#endif