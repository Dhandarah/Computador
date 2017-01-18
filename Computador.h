#ifndef COMPUTADOR_H
#define COMPUTADOR_H

class Computador
{
public:
    Computador();
    ~Computador();
    Computador (string &);
    Computador ( const Computador &);
    
    void mostrarMemoria(const int &);
    int tamDiskRig();
    void CPU();
    
private:
    
   static int tamMemoria;
   int plVideo;
   string nome_SO;
   string nomeLogin;
   string senhaLogin;

};

#endif // COMPUTADOR_H
