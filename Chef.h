#include <iostream>
#include <string>

using namespace std;

#ifndef CHEF_H
#define CHEF_H
class Chef{
    protected:
        string platilloFavorito;
        int rating;
    public:
        Chef(string,int);
        Chef();
        string getPlatilloFavorito();
        void setPlatilloFavorito(string);

        int getRating();
        void setRating(int);

};
#endif