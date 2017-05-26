// Lavaplatos.h

#include <string>
#include "Personal.h"
#include "Usuario.h"

using namespace std;

#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H

class Lavaplatos : public Personal
{
    private:
        int nivel;

    public:
        Lavaplatos(string, string, string, int, string, string, int, int);
        // username, password, nombre, edad, ID, numero, anoContratacion, nivel

        // nivel
        int getNivel();
        void setNivel(int);

};

#endif