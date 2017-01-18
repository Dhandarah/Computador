#include "Computador.h"
#include <iostream>

using std::cout;

static tamMemoria = 16;

Computador::Computador()
{
    this->nomeLogin = "desconhecido";
    this->senhaLogin = "****";
}
 Computador::Computador (const string &nomeLogin)
 {
     this->nomeLogin = nomeLogin;
 }
 
 Computador::Computador(const Computador &x)
 {
    plVideo = x.plVideo;
    nome_SO = x.nom_SO;
    nomeLogin = x.nomeLogin;
    senhaLogin = x.senhaLogin;
 }
Computador::~Computador()
{
}

void Computador::mostrarMemoria(const int tamMemoria) 
{
    cout<< "O tamanho da memória é: "<<tamMemoria;
}
