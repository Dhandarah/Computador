#include "MaquinaEletronica.h"
#include <string>
#include <iostream>
using std::cout;



MaquinaEletronica::MaquinaEletronica()
{
	this->numero1 = 3,5;
	this->numero2 = 7;
	this->nomeDados = 'A';
}

MaquinaEletronica::MaquinaEletronica(const MaquinaEletronica &x)
{
	numero1 = x.numero1;
	numero2 = x.numero2;
	nomeDados = x.nomeDados;
}

ostream &operator<<( ostream &output, const MaquinaEletronica &n1)
{
	output<<n1.numero1<<'--'<<
			n1.numero2<<'__'<<
			n1.nomeDados<<;
}

const MaquinaEletronica& MaquinaEletronica::operator=(const MaquinaEletronica &vet)
{
	this->numero1 = vet.numero1;
	this->numero2 = vet.numero2;
	this->nomeDados = nomeDados;
    this->codMaquina[10];

}
