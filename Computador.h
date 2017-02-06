#ifndef COMPUTADOR_H
#define COMPUTADOR_H

class Computador
{
public:
    Computador();
    ~Computador();
    Computador (const string &, const string &);
    Computador ( const Computador &);
    
    const Computador &operator=(const Computador & );
    bool operator==(const Computador &) const;
    bool operator!=(const Computador &) const;

    void exibirMemoria(const int &);
    int exibirDispositivos_IO();
    
    
private: 
   static int codFabricante;
   int memoPrincipal;
   int memoSecundaria;
   int plVideo;
   int plRede;
   int plSom;
   int *ptr;

   string nome_SO[10];
   string nomeLogin;
   string senhaLogin;
   const string tamMonitor[5]; 


};

#endif // COMPUTADOR_H
