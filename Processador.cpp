#include "Processador.h"
#include <string>
#include <iostream>
using std::cout;

const string Processador::nomeFabricante[] = 10;


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
    this->coreProcessador = array.coreProcessador;
    this->clockProcessador = array.clockProcessador;
    this->cacheProcessador = array.cacheProcessador;
    this->potenciaProcessador = array.potenciaProcessador;
    delete [] fabricante;

    fabricante = new fabricante[nomeFabricante];
    for (int i=0; i<nomeFabricante; i++)
      fabricante[i] = array.info[i];
    
 }

 bool Processador::operator == (const Processador &r) const
 {
  if (fabricante != r.fabricante)
    return false;
  for (int i=0; i<fabricante; i++ )
    if (ptr[i] != r.ptr[i])
      return false;

  return true;
 }
 bool Processador::operator != (const Processador &r)
 {
  return ! (*this == r);
 }
    
Processador::~Processador()
{
}
