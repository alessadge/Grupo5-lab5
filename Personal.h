#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal{
    protected:
        int anoContratacion;
    public:
        Personal(int);
        Personal();
        int getAnoContratacion();
        void setAnoContratacion(int);

};
#endif