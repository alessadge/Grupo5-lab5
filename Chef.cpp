// Chef.cpp

#include "Chef.h"

Chef::Chef(string username, string password, string nombre, int edad, string ID, string numero, int anoContratacion,
	string platilloFavorito, int rating) : Personal(username, password, nombre, edad, ID, numero, anoContratacion)
{
    this -> platilloFavorito = platilloFavorito;
    this -> rating = rating;
}

// platilloFavorito
void Chef::setPlatilloFavorito(string platilloFavorito)
{
   this -> platilloFavorito = platilloFavorito;
}
string Chef::getPlatilloFavorito()
{
   return platilloFavorito;
}

// rating
void Chef::setRating(int rating)
{
   this -> rating = rating;
}
int Chef::getRating()
{
   return rating;
}