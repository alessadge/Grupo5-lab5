#include <iostream>
#include <string>

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
class Administrador{
    protected:
        int contratados;
        int despedidos;
    public:
        Administrador(int,int);
        Administrador();
        int getContratados();
        void setContratados(int);

        int getDespedidos();
        void setDespedidos(int);

};
#endif