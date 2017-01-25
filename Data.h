#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data();
    ~Data();
    Data(int =1, int=1, int=1);
    Data(const Data &);
    
    void verificarData(int, int, int);
    
private:
    int dia;
    int mes;
    int ano;
    const int diaDoMes[13];

};

#endif // DATA_H
