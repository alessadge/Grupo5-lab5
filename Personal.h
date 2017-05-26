#include <iostream>
#include <string>
#include "Usuarios.h"

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal:public Usuarios{
    protected:
        int anoContratacion;
    public:
        Personal(string, string, string, int, string, string,int);
        Personal();
        int getAnoContratacion();
        void setAnoContratacion(int);

};
#endif
