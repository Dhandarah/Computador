#ifndef PROCESSADOR_H
#define PROCESSADOR_H


class Processador
{
public:
    Processador();  
    ~Processador();
    Processador(const int &, const string &);
    Processador(const Processador &);
    friend ostream &operator<<( ostream &, const Processador &);

    const Processador &operator=(const Processador & );
    bool operator==(const Processador &) const;
    bool operator!=(const Processador &) const;

    string definirFabricante(const string &);
    void exibidados();
    
        
private:
   int coreProcessador;
   string clockProcessador;
   int cacheProcessador;
   int potenciaProcessador;
   int *ptr;
   
   const static int nomeFabricante = 10;
   string fabricante[nomeFabricante];
    

};

#endif // PROCESSADOR_H
