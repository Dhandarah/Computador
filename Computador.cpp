#include "Computador.h"
#include <iostream>
#include <string>
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

 ostream &operator<<( ostream &output, const Computador &informacoes)
 {
     output<<"O tamanho da memoria princial e da memoria secundaria "<<informacoes.memoPrincipal
           "--" <<informacoes.memoSecundaria;
 }
const Computador& Computador::operator=(const Computador &c)
 {
   memoPrincipal = c.memoPrincipal;
   memoSecundaria = c.memoSecundaria;
   plVideo = c.plVideo;
   plRede = c.plRede;
   plSom = c.plSom;

   nome_SO = c.nome_SO;
   nomeLogin = c.nomeLogin;
   senhaLogin = c.senhaLogin;

   info = new nome_SO[size];
   for (int i=0; i<size; i++)
    info[i] = c.info[i];
 }
Computador::~Computador()
{
}
