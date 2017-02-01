#ifndef PROCESSADOR_H
#define PROCESSADOR_H


class Processador
{
public:
    Processador();  
    Processador(const int &, const string &);
    Processador(const Processador &);
    friend ostream &operator<<( ostream &, const Processador &);
    string definirFabricante(const string &);
    void exibidados();
    const Processador &operator = (const Processador &);
        
private:
   int coreProcessador;
   string clockProcessador;
   int cacheProcessador;
   int potenciaProcessador;
   
   const static string nomeFabricante = 10;
   string fabricante[nomeFabricante];
}
    Processador();
    ~Processador();

};

#endif // PROCESSADOR_H
