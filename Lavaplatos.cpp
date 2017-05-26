// Lavaplatos.cpp

#include "Lavaplatos.h"

Lavaplatos::Lavaplatos(string username, string password, string nombre, int edad, string ID, string numero,
	int anoContratacion, int nivel) : Personal(username, password, nombre, edad, ID, numero)
{
    this -> nivel = nivel;
}

// nivel
void Lavaplatos::setNivel(int nivel)
{
   this -> nivel = nivel;
}
int Lavaplatos::getNivel()
{
   return nivel;
}