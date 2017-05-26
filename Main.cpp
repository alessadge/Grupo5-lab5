#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Lavaplatos.h"
#include "Mesero.h"
#include <iosream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string contra, usuario;
    int opcion=0;
    vector<Usuario*> usuarios;
    usuarios.push_back(new Administrador("qwerty","qwerty","Admin",20,"0801","11111111",1997,0,0));
    while (opcion != 3){
        cout<<"MENU"<<endl;
        cout<<"1.) LOGIN CLIENTE"<<endl;
        cout<<"2.) LOGIN PERSONAL"<<endl;
        cout<<"3.) Salir "<<endl;
        cin>>opcion;
        if(opcion==1){
	    string nombre;
	    int edad;
	    string ID;
	    string numero;
	    cout<<"Ingrese Usuario: "<<endl;
	    cin>>usuario;
	    cout<<"Ingrese contrasena: "<<endl;
	    cin>>contra;
	      
        }
        if(opcion==2) // LOGIN PERSONAL
        {
        	string username, password, nombre, ID, numero;
        	int edad, anoContratacion;

        	// USUARIO
        	// username
        	cout << "Ingrese un nombre de usuario: ";
        	cin >> username;

        	// password
        	cout << "Ingrese una contrasena: ";
        	cin >> password;

        	// nombre
        	cout << "Ingrese un nombre: ";
        	cin >> nombre;

        	// edad
        	cout << "Ingrese una edad: ";
        	cin >> edad;
        	// TODO: Validar que sea mayor de edad.

        	// ID
        	cout << "Ingrese un ID: ";
        	cin >> ID;
        	// TODO: Validar que sea unico.

        	// numero
        	cout << "Ingrese un numero de telefono: ";
        	cin >> numero;
        	// TODO: Validar que tenga por lo menos 8 digitos.

        	// PERSONAL
        	// anoContratacion
        	cout << "Ingrese el ano de contratacion: ";
        	cin >> anoContratacion;
        	// TODO: Validar que tenga sentido.

            int opcion2 = 0;
	    	while(opcion2 != 5)
	    	{
		   		cout << "LOGIN PERSONAL" << endl;
                cout << "1. ADMIN" << endl;
	           	cout << "2. Chef" << endl;
	           	cout << "3. Lavaplatos" << endl;
	           	cout << "4. Mesero" << endl;
	           	cout << "5. Salir" << endl;
	           	cout << "Escoja una opcion: ";
		   		cin >> opcion2;

		   		if(opcion2 == 1) // Administrador
		   		{

		   		}
		   		else if(opcion2 == 2) // Chef
		   		{

		   		}
		   		else if(opcion2 == 3) // Lavaplatos
		   		{

		   		}
		   		else if(opcion2 == 4) // Mesero
		   		{

		   		}
		   		else
		   		{
		   			cout << "Debe escoger una opcion valida." << endl;
		   		}

	    	} // fin while opcion2
        }
    } // fin while
for(int i=0; i<usuarios.size();i++){
   delete usuarios[i];
}
usuarios.clear();
return 0;
}