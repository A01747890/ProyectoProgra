 #include <iostream>
 #include "Episodio.hpp"
 using namespace std;

int contaEpisodio=0;
Episodio::Episodio(){

}
Episodio::Episodio(string ID, string Nombre, double Calificacion,int Duracion, string FechaEstreno,int TemporadaS,int NumEpisodio):Programa(ID,Nombre,Calificacion,Duracion,FechaEstreno){

    this->TemporadaS=TemporadaS;
    this->NumEpisodio=NumEpisodio;
}
void Episodio::ImprimePrograma(){

    cout<<endl<<endl<<"Episodio "<<NumEpisodio<<endl;
    cout<<"Temporada: "<<TemporadaS<<endl;
    cout<<"ID: "<<Episodio::getID()<<endl;
    cout<<"Nombre: "<<Episodio::getNombre()<<endl;
    cout<<"Calififacion: "<<Episodio::getCalificacion()<<endl;
    cout<<"Duracion: "<<Episodio::getDuracion()<<endl;
    cout<<"Fecha de Estreno: "<<Episodio::getFechaEstreno()<<endl;
}