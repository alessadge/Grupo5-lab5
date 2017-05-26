#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal:public Usuario{
    protected:
        int anoContratacion;
    public:
        Personal(string, string, string, int, string, string,int);
        Personal();
        int getAnoContratacion();
        void setAnoContratacion(int);

};
#endif
