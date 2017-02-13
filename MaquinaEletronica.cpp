#include "MaquinaEletronica.h"
#include <string>
#include <iostream>
using std::cout;



MaquinaEletronica::MaquinaEletronica()
{
	this->ptr = 0;
    this->on_off = 1;
	this->voltagem = 0;
    this->codMaquina[vet] = 0;
}
}

MaquinaEletronica::MaquinaEletronica(const MaquinaEletronica &x)
{
    on_off = x.on_off;
	voltagem = x.voltagem;
    codMaquina = x.codMaquina;
}
}

ostream &operator<<( ostream &output, const MaquinaEletronica &n1)
{
	output<<n1.on_off<<'--'<<
			n1.voltagem<<'__'<<
			n1.codMaquina<<;
}

const MaquinaEletronica& MaquinaEletronica::operator=(const MaquinaEletronica &vet)
{
	this->on_off = vet.on_off;
	this->voltagem = vet.voltagem;
    this->codMaquina;
    int * Ptr = new int[codMaquina];           
   for (int i = 0; i < codMaquina; i++)
   {
      cout << "Enter test " << i + 1 << " : ";
      cin >> Ptr[i];
   }
   for (int i = 0; i < codMaquina; i++)
      cout << "Test " << i + 1 << " is "<< Ptr[i] << endl;
   delete [] Ptr;
   return 0;

}

bool MaquinaEletronica::operator == (const MaquinaEletronica &r) const
 {
  if (codMaquina!= r.codMaquina)
    return false;
  for (int i=0; i<codMaquina; i++ )
    if (ptr[i] != r.ptr[i])
      return false;

  return true;
 }
 bool MaquinaEletronica::operator != (const MaquinaEletronica &y)
 {
  return ! (*this == y);
 }
void verificarVoltagem(float &volt)
{
    if (volt == 127){
        cout<<"127V ou 110V"<<;
        else if(volt == 220) {
            cout<<"220V";
        }
    }
}

int turnOnOff (int &num) const 
{
    if (num == 0)
    cout<<"Computador Ligado!";
        else 
            return false;
};