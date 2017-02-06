#include "Computador.h"
#include <iostream>
#include <string>
using std::cout;

int Computador::codFabricante = 219231823912;


Computador::Computador()
{
    this->nomeLogin = "desconhecido";
    this->senhaLogin = "****";
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

void memoria(const int &mP, const int &mS)
{
  memoPrincipal = mP;
  memoSecundaria = mS;
}

int dispositivos_IO()
{
  plVideo = 512;
  plSom = 16 ;
  plRede = 48;

  cout<< "A placa de video possui a quantidade :"<<plVideo<< "De memoria dedicada." <<;
      << "A placa de som trabalha com: "<<plSom<< "Bits."<<;
      <<"A placa de rede possui um nó de "<<plRede<< "Bits."<<;
}


 ostream &operator<<( ostream &output, const Computador &informacoes)
 {
     output<<"O tamanho da memoria princial e da memoria secundaria "<<informacoes.memoPrincipal
           "--" <<informacoes.memoSecundaria;
 }

 const Computador& Computador::operator=(const Computador &c)
 {
   this->memoPrincipal = c.memoPrincipal;
   this->memoSecundaria = c.memoSecundaria;
   this->plVideo = c.plVideo;
   this->plRede = c.plRede;
   this->plSom = c.plSom;
   delete [] info;

   this->info = new nome_SO[c.size]; 

 
   for (int i=0; i<c.size; i++)
    info[i] = c.info[i];
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
