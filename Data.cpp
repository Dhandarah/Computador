#include "Data.h"

Data::Data()
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

Data::Data(const int dia, const int mes)
{
    
}

Data::~Data()
{
}

int Data::void verificarData(int dia) 
{
    int diasDoMes[13] = {0,31,28,31,30,30,31,31,30,31,30,31};
    
    if (dia>0 && dia<=diasDoMes[mes])
        return dia;
}
