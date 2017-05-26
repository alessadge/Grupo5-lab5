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
        if(opcion==2){
            int opcion2;
	    while(opcion2 != 5){
		   cout<<"MENU"<<endl;
                   cout<<"1.) ADMIN"<<endl;
	           cout<<"2.) Chef"<<endl;
	           cout<<"3.) Lavaplatos"<<endl;
	           cout<<"4.) Mesero"<<endl;
	           cout<<"5.) Salir"<<endl;
		   cin>>opcion2;
	 
	    }//fin while opcion2
        }
    }//fin while
for(int i=0; i<usuarios.size();i++){
   delete usuarios[i];
}
usuarios.clear();
return 0;
}

