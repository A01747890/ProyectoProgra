#include <iostream>
#include "Streaming.hpp"

using namespace std;

Streaming::Streaming(){
     
}

Streaming::Streaming(string NombrePlatafroma, string Cuenta, string perfiles){

    this -> perfiles = perfiles;
    
    this -> NombrePlatafroma = NombrePlatafroma;

    this -> Cuenta = Cuenta;
}

void Streaming::Bienvenida(){
     cout<<"Hola "<<perfiles<<endl<<endl;
     cout<<"Bienvenido a "<<NombrePlatafroma<<endl<<endl;
     cout<<"La cuenta con la que iniciaste es: "<<Cuenta<<endl<<endl;
     cout<<"Empezemos a ver..."<<endl<<endl;


}