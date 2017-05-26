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

int verificarID(int,vector<Usuario*>,string);
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
        cout<<"Escoja una opcion: "<<endl;
        cin>>opcion;
        if(opcion==1){
	    string nombre;
	    int edad,cont=0;
	    string ID;
	    string numero;
	    string direccion;
	    int rating;
	    cout<<"Ingrese Usuario: "<<endl;
	    cin>>usuario;
	    cout<<"Ingrese contrasena: "<<endl;
	    cin>>contra;
	    cout<<"Ingrese un nombre: "<<endl
	    cin>>nombre;
	    cout<<"Ingrese su edad: "<<endl;
            cin>>edad;
	    while(edad<18){
	       cout<<"Tiene que ser mayor de 18"<<endl;
	       cout<<"Ingrese su edad: "<<endl;
	       cin>>edad;
	    }

	    while(cont==0){
		  cout<<"Ingrese su ID: "<<endl;
		  cin>>ID;
		  cont=1;
	          for(int i=0; i<usuarios.size();i++){
		      if(usuarios[i]==ID)
			   cont=0;
	    }
 
	    }//fin while
	    cout<<"Ingrese su numero de telefono"<<endl;
	    cin>>numero;
	    while(numero.size()<8){
	       cout<<"Numero incorrecto debe tener 8 o mas digitos"<<endl<<"Intente nuevamente: "<<endl;
	       cin>>numero;
	    }  
	    cout<<"Ingrese su direccion: "<<endl;
	    cin>>direccion;
	    cout<<"Ingrese un rating 1-5: "<<endl;
	    cin>>rating;
	    while(rating<1||rating>5){
	       cout<<"El numero debe ser entre 1-5. Intente nuevamente: "<<endl;
	       cin>>rating;
	    }
	    
	    usuarios.push_back(new Cliente(username, password, nombre, edad, ID, numero, direccion, rating));
	    cout<<"Se agrego un Cliente exitosamente"<<endl;
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

int verificarID(int cont,Vector<*usuarios,string ID){
   cont=1;
   for(int i=0; i<usuarios.size();i++){
      if(usuarios[i]==ID)
	 cont=0;
   }
   
return cont;
}
