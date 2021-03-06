#ifndef COMPUTADOR_H
#define COMPUTADOR_H

class Computador
{
public:
    Computador();
    ~Computador();
    Computador (const string &, const string &);
    Computador ( const Computador &);
    
    void memoria(const int &);
    int dispositivos_IO();
    void infCPU() const;
    
private: 
   static int codFabricante;
   int memoPrincipal;
   int memoSecundaria;
   int plVideo;
   int plRede;
   int plSom;
  

   string nome_SO;
   string nomeLogin;
   string senhaLogin;

};

class Processador
{
public:
    Processador();  
    string nomeDoFabricante(const string &);
    void exibidados();
    
        
private:
   int coreProcessador;
   string clockProcessador;
   int cacheProcessador;
   int potenciaProcessador;
   
   const static string nomeFabricante = 10;
   string fabricante[nomeFabricante];
}

#endif // COMPUTADOR_H