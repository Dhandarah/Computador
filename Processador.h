#ifndef PROCESSADOR_H
#define PROCESSADOR_H


class Processador
{
public:
    Processador();  
    string definirFabricante(const string &);
    void exibidados();
    
        
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
