#include <iostream>
#include <string>

using namespace std;

#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H
class Lavaplatos{
    protected:
        int nivel;
    public:
        Lavaplatos(int);
        Lavaplatos();
        int getNivel();
        void setNivel(int);

};
#endif