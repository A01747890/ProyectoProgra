#include <iostream>
#include "Serie.hpp"
#include <vector>
using namespace std;

int contaSerie=0;
 Serie::Serie(){

 }
 Serie::Serie(string ID, string Nombre,string Genero){
     this->ID=ID;
     this->Nombre=Nombre;
     this->Genero=Genero;

 }
void Serie::AñadirEp(Episodio*Epi){

    EpisodiosSerie.push_back(Epi);


}
void Serie::ImprimePrograma(){
    contaSerie=contaSerie+1;
    cout<<"Serie "<<contaSerie<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Genero: "<<Genero<<endl;
    for (int i=0;i<EpisodiosSerie.size();i++){
        EpisodiosSerie[i]->ImprimePrograma();
    }
    

}

