#include <vector>
#include <iostream>
#include <string>
#include "Streaming.hpp"
#include "Pelicula.hpp"
#include "Catalogo.hpp"

using namespace std;

int main(){

//Das la bienvendia ( por el momento )
Streaming stream1("Netflix","luis.mtz.qwer@gmail.com","Luis");
stream1.Bienvenida();
Catalogo Cat; //Creas Catalogo
Pelicula Peli1("J8967","Spiderman",8.5,124,"3 de Febrero","Accion"); //Creas Pelicula
Cat.GuardarProgramaP(&Peli1);//Guardas
Serie Serie1("J8967","Las locuras","Accion");//Creas Serie
Cat.GuardarProgramaS(&Serie1);//Guardas
Episodio Tem1("J8967","Dato 1",8.5,124,"7 de Diciembre",2,1);//Creas Episodio
Serie1.AñadirEp(&Tem1);//Guardas en serie

Cat.ImprimePrograma();

return 0;
    
}