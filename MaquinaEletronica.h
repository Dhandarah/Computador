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

	float calcularNumeros(float &, float &);
	string armazenarDados(const string &);
	void exibirDados(string &, float &);

private:
	float numero1;
	float numero2;
	string nomeDados;
    const int codMaquina[10];
}
