// Administrador.h

#include <string>
#include "Personal.h"
#include "Usuario.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador : public Personal
{
    private:
        int contratados;
        int despedidos;

    public:
        Administrador(string, string, string, int, string, string, int, int, int, double);
        // username, password, nombre, edad, ID, numero, anoContratacion, contratados, despedidos, sueldo

        // contratados
        int getContratados();
        void setContratados(int);

        // despedidos
        int getDespedidos();
        void setDespedidos(int);
};

#endif