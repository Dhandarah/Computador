#ifndef MAQUINAELETRONICA_H
#define MAQUINAELETRONICA_H
#include <iostream>
#include <string>

class MaquinaEletronica 
{
public:
	MaquinaEletronica();
	˜MaquinaEletronica();
	MaquinaEletronica(const MaquinaEletronica &);
	friend ostream &operator<<( ostream &, const MaquinaEletronica &);

	const MaquinaEletronica &operator=(const MaquinaEletronica & );
	bool operator==(const MaquinaEletronica &) const;
	bool operator !=(const MaquinaEletronica &) const;

	
	void verificarTensao(int &);
    int turnOnOff (int &) const;

private:
    int *ptr;
    int on_off;
	int tensao;
    const int vet = 10;
    int codMaquina[vet];
}
