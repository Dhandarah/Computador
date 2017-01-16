#include "Computador.h"
#include <iostream>

using std::cout;

Computador::Computador()
{
    tamMemoria = 2;
}

Computador::~Computador()
{
}

void Computador::mostrarMemoria() 
{
    cout<< "O tamanho da memória é: "<<tamMemoria;
}
