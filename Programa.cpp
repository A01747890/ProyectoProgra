#include <iostream>
#include "Programa.hpp"
using namespace std;


Programa::Programa(){

}
Programa::Programa(string ID, string Nombre, double Calificacion,int Duracion, string FechaEstreno){
    this->ID=ID;
    this->Nombre=Nombre;
    this->Calificacion=Calificacion;
    this->Duracion=Duracion;
    this->FechaEstreno=FechaEstreno;
}
void Programa::ImprimePrograma(){

}