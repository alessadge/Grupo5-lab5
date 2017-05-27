// Meseros.cpp

#include "Meseros.h"
#include "Personal.h"
#include "Usuario.h"

Meseros::Meseros(string username, string password, string nombre, int edad, string ID, string numero, int anoContratacion,
	double sueldo): Personal(username, password, nombre, edad, ID, numero, anoContratacion, sueldo) { }
Meseros::Meseros() { }

// lista
string Meseros::getLista(int pos)
{
	return lista[pos];
}
void Meseros::setLista(string algo)
{
	lista.push_back(algo);
}

void Meseros::setPlatillos(int n)
{
	lista.clear();

	string platillo;
	for(int i = 1; i <= n; i++)
	{
		cout << "Platillo " << "#" << i << ": " << endl;
		cin >> platillo;
		lista.push_back(platillo);
	}
	cout << "Platillos agregados correctamente." << endl;
}
