// Meseros.h

#include <iostream>
#include <string>
#include <vector>
#include "Personal.h"
#include "Usuario.h"

using namespace std;

#ifndef MESEROS_H
#define MESEROS_H

class Meseros : public Personal
{
    private:
		vector<string> lista;

    public:
    	Meseros();
        Meseros(string, string, string, int, string, string, int, double);

        // lista
		string getLista(int);
		void setLista(string);

		void setPlatillos(int);
};

#endif