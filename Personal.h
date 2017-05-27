// Personal.h

#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H

class Personal : public Usuario
{
    protected:
        int anoContratacion;
        double sueldo;

    public:
    	Personal();
        Personal(string, string, string, int, string, string, int, double);

        // anoContratacion
        int getAnoContratacion();
        void setAnoContratacion(int);

        // sueldo
        double getSueldo();
        void setSueldo(double);
};

#endif