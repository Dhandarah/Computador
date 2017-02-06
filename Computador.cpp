#include "Computador.h"
#include <iostream>
#include <string>
using std::cout;

int Computador::codFabricante = 219231823912;


Computador::Computador()
{
    this->nomeLogin = "desconhecido";
    this->senhaLogin = "****";
    this->ptr=0
    this->memoPrincipal = 0;
    this->memoSecundaria = 0;
    this->nome_SO = 0;
    this->plRede = 0;
    this->plSom = 0;
    this->plVideo = 0;
    this->nome_SO = "Desconhecido";
    
}
 Computador::Computador (const string &nomeLogin,const string &senhaLogin)
 {
     this->nomeLogin = nomeLogin;
     this->senhaLogin = senhaLogin;
 }
 
 Computador::Computador(const Computador &x)
 {
   memoPrincipal = x.memoPrincipal;
   memoSecundaria = x.memoSecundaria;
   plVideo = x.plVideo;
   plRede = x.plRede;
   plSom = x.plSom;

   nome_SO = x.nome_SO;
   nomeLogin = x.nomeLogin;
   senhaLogin = x.senhaLogin;

 }

void exibirMemoria(const int &mP, const int &mS)
{
  memoPrincipal = mP;
  memoSecundaria = mS;
  
  cout<<"Fabricante"<<codFabricante<<
  "Memoria principal"<<memoPrincipal<<
  "Memoria Secundaria" <<memoSecundaria;
}

int exibirDispositivos_IO()
{
  plVideo = 512;
  plSom = 16 ;
  plRede = 48;

  cout<< "A placa de video possui a quantidade :"<<plVideo<< "De memoria dedicada." <<;
      << "A placa de som trabalha com: "<<plSom<< "Bits."<<;
      <<"A placa de rede possui um nó de "<<plRede<< "Bits."<<;
}


 ostream &operator<<( ostream &output, const Computador &info)
 {
     output<<"Informações: "
        "Memoria Principal: "<<info.memoPrincipal
           "\n" 
           "Memoria Secundaria: "<<info.memoSecundaria<<
           "\n"
           "Placa de Video: "<<info.plVideo<< "\n" 
           "Placa de Rede: "<<info.plRede<<
           "\n"
           "Placa de Som: "<<info.plSom;
 }

 const Computador& Computador::operator=(const Computador &c)
 {
   this->memoPrincipal = c.memoPrincipal;
   this->memoSecundaria = c.memoSecundaria;
   this->plVideo = c.plVideo;
   this->plRede = c.plRede;
   this->plSom = c.plSom;
   this->nome_SO = c.nome_SO;
   

   this->nome_SO = new nome_SO[c.tamMonitor]; 

 
   for (int i=0; i<c.tamMonitor; i++)
   tamMonitor[i] = c.tamMonitor[i];
  return *this;
 }

 bool Computador::operator == (const Computador &r) const
 {
  if (tamMonitor != r.tamMonitor)
    return false;
  for (int i=0; i<tamMonitor; i++ )
    if (ptr[i] != r.ptr[i])
      return false;

  return true;
 }
 bool Computador::operator != (const Computador &r)
 {
  return ! (*this == r);
 }
Computador::~Computador()
{
}
