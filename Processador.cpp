#include "Processador.h"
#include <string>
#include <iostream>
using std::cout;

const string Processador::nomeDoFabricante[] = 10;


Processador::Processador()
{
    this->coreProcessador = 0;
    this->clockProcessador = 'Hz';
    this->cacheProcessador = 0;
    this->potenciaProcessador = 0;
}

 Processador::Processador(const int &core, const string &clock)
 {
    this->coreProcessador = core;
    this->clockProcessador = clock;
 }
 
  Processador::Processador(const Processador &y)
  {
    coreProcessador = y.coreProcessador;
    clockProcessador = y.clockProcessador;
    cacheProcessador = y.cacheProcessador;
    potenciaProcessador = y.potenciaProcessador;
  }
  
 ostream &operator<<( ostream &output, const Processador &fabricante)
 {
     output<<"O nome do Fabricante e a quatidade de nucleos "<<fabricante.nomeFabricante
           <<fabricante.coreProcessador;
 }
 
const Processador& Processador::operator=(const Processador &array)
 {
    coreProcessador = array.coreProcessador;
    clockProcessador = array.clockProcessador;
    cacheProcessador = array.cacheProcessador;
    potenciaProcessador = array.potenciaProcessador;

    info = new nomeFabricante[size];
    for (int i=0; i<size; i++)
      info[i] = array.info[i];
    
 }
    
Processador::~Processador()
{
}

