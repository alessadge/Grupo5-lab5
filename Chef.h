// Chef.h

#include <string>
#include "Personal.h"
#include "Usuario.h"

using namespace std;

#ifndef CHEF_H
#define CHEF_H

class Chef : public Personal
{
    private:
        string platilloFavorito;
        int rating;

    public:
        Chef(string, string, string, int, string, string, int, string, int);
        // username, password, nombre, edad, ID, numero, anoContratacion, platilloFavorito, rating

        // platilloFavorito
        string getPlatilloFavorito();
        void setPlatilloFavorito(string);

        // rating
        int getRating();
        void setRating(int);
};

#endif