// Administrador.cpp

#include "Administrador.h"

Administrador::Administrador(string username, string password, string nombre, int edad, string ID, string numero,
	int anoContratacion, int contratados, int despedidos) : Personal(username, password, nombre, edad, ID, numero,
	anoContratacion)
{
    this -> contratados = contratados;
    this -> despedidos = despedidos;
}

// contratados
void Administrador::setContratados(int contratados)
{
   this -> contratados = contratados;
}
int Administrador::getContratados()
{
   return contratados;
}

// despedidos
void Administrador::setDespedidos(int despedidos)
{
   this -> despedidos = despedidos;
}
int Administrador::getDespedidos()
{
   return despedidos;
}