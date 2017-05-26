#include <iostream>
#include <string>

using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H
class Cliente{
    protected:
        string direccion;
        int rating;
    public:
        Cliente(string,int);
        Cliente();
        string getDireccion();
        void setDireccion(string);

        int getRating();
        void setRating(int);

};
#endif