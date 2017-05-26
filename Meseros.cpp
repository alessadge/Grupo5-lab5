#include "Meseros.h"
#include "Personal.h"
#include "Usuario.h"

Meseros::Meseros(string username, string password, string nombre, int edad, string ID, string numero,int anoContratacion):Personal(username, password, nombre,edad,ID,numero,anoContratacion){

	
}
Meseros::Meseros(){
}
string Meseros:: getLista(int pos){
	return lista[pos];
}

void Meseros:: setLista(string algo){
	lista.push_back(algo);
}
