#include "Computador.h"
#include <iostream>

using std::cout;

int Computador::codFabricante = 219231823912;

const string Processador::clockProcessador = '3,6 GHz';
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

void infCPU() const
{}

Processador::Processador();

void Processador::exibiDados()
{
   cout<<coreProcessador,
         clockProcessador,
         cacheProcessador,
         potenciaProcessador<<;
}

void Processador::nomeDoFabricante(const string &nomedofabricante)
{
    fabricante[nomeFabricante] = nomedofabricante;
}
Computador::~Computador()
{
}