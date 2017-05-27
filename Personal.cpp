// Personal.cpp

#include "Personal.h"
#include "Usuario.h"

Personal::Personal(string username, string password, string nombre, int edad, string ID, string numero, int anoContratacion,
	double sueldo) : Usuario(username, password, nombre, edad, ID, numero)
{
    this -> anoContratacion = anoContratacion;
    this -> sueldo = sueldo;
}
Personal::Personal() { }

// anoContratacion
void Personal::setAnoContratacion(int anoContratacion)
{
   this -> anoContratacion = anoContratacion;
}
int Personal::getAnoContratacion()
{
   return anoContratacion;
}

// sueldo
double Personal::getSueldo()
{
	return sueldo;
}
void Personal::setSueldo(double sueldo)
{
	this -> sueldo = sueldo;
}