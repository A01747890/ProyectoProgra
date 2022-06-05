#include <iostream>
#include "Pelicula.hpp"
using namespace std;


int contaPelicula=0;
Pelicula::Pelicula (){

}
Pelicula::Pelicula(string ID, string Nombre, double Calificacion,int Duracion, string FechaEstreno, string Genero):Programa(ID,Nombre,Calificacion,Duracion,FechaEstreno){

    this->Genero=Genero;
    Programa Cat(ID,Nombre,Calificacion,Duracion,FechaEstreno);
}
void Pelicula::ImprimePrograma(){

    contaPelicula=contaPelicula+1;
    cout<<"Pelicula "<<contaPelicula<<endl;
    cout<<"ID: "<<Pelicula::getID()<<endl;
    cout<<"Nombre: "<<Pelicula::getNombre()<<endl;
    cout<<"Calififacion: "<<Pelicula::getCalificacion()<<endl;
    cout<<"Duracion: "<<Pelicula::getDuracion()<<endl;
    cout<<"Fecha de Estreno: "<<Pelicula::getFechaEstreno()<<endl;
    cout<<"Genero: "<<Genero<<endl;


}