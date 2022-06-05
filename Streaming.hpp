#include<iostream>
#ifndef STREAMING_HPP
#define STREAMING_HPP

using namespace std;

class Streaming{
    
    private:

    string perfiles;

    string NombrePlatafroma;

    string Cuenta;
    
    public:

    
    Streaming();

    Streaming(string NombrePlatafroma, string Cuenta, string perfiles);

    void Bienvenida();

    
};

#endif