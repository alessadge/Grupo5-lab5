#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Lavaplatos.h"
#include "Meseros.h"
#include <iostream>
#include <string>
#include <vector>

string sueldoMenor(vector<Usuario*>);
string sueldoMayor(vector<Usuario*>);
int promedioSueldo(vector<Usuario*>);
int eliminar();
Chef* agregarChef();
Meseros* agregarMesero();
Lavaplatos* agregarLavaplatos();
int verificarID(int,vector<Usuario*>,string);
using namespace std;
int main(){
    string contra, usuario;
    int opcion=0;
    vector<Usuario*> usuarios;
    usuarios.push_back(new Administrador("qwerty","qwerty","Admin",20,"0801","11111111",1997,0,0,0));
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
				   	if(usuario=="qwerty"&&password=="qwerty"){
					int opcion3;
					while(opcion3!=5){
						cout << "ADMIN" << endl;
                        			cout << "1. Contratar empleado" << endl;
                        			cout << "2. Despedir empleado" << endl;
                       	        		cout << "3. Aumentar/Decrementar de acuerdo a la inflacion." << endl;
                       	        		cout << "4. Conseguir empleados con menor sueldo. " << endl;
                	        		cout << "5. Conseguir empleados con mayor sueldo. " << endl;
						cout << "6. Conseguir promedio de sueldos. " << endl;
						cout << "7. Salir." << endl;
        	                		cout << "Escoja una opcion: ";
						cin>>opcion3;
						
						if(opcion3==1)
						{
							int opcion4;
							cout << "Agregar" << endl;
                                                	cout << "1. Chef" << endl;
                                                	cout << "2. Lavaplatos" << endl;
                                                	cout << "3. Mesero" << endl;
        	                                        cout << "Escoja una opcion: ";
	                                                cin>>opcion4;

							if(opcion4==1){
								usuarios.push_back(agregarChef());
								cout<<"El chef se agrego exitosamente!"<<endl;
							}
			
							if(opcion4==2){
                                                                usuarios.push_back(agregarLavaplatos());
                                                                cout<<"El Lavaplatos se agrego exitosamente!"<<endl;
							}
					
							if(opcion4==3){
								usuarios.push_back(agregarMesero());
                                                                cout<<"El Mesero se agrego exitosamente!"<<endl;
							

						}//fin opcion 1
						
						if(opcion3==2)
						{
							
							usuarios.erase(usuarios.begin()+eliminar());
						}
						
						if(opcion3==3)
						{
							int opcion5;
							while (opcion5!=4){
								cout<<"Cual desea modificar?"<<endl;
								cout<<"1. Chef"<<endl;
								cout<<"2. Lavaplatos"<<endl;
								cout<<"3. Mesero"<<endl;
								cout<<"4. Salir"<<endl;
								cin>>opcion5;
								
								if(opcion5==1){
									int pos;
                                                        		double porcentaje;
                                                        		double sueldo;
                                                        		cout<<"Ingrese posicion que desea modificar: "<<endl;
                                                        		cin>>pos;
                                                        		cout<<"Ingrese porcentaje que desearia inflarle: "<<endl;
                                                        		cin>>porcentaje;
                                                        			sueldo = (dynamic_cast<Chef*>(usuarios[pos]))->getSueldo();
                                                        			porcentaje = sueldo + (sueldo*porcentaje)
                                                        			(dynamic_cast<Chef*>(usuarios[pos]))->setSueldo(porcentaje);
                                                        			cout<<"Se inflo exitosamente!"<<endl;
								}
					
								if(opcion5==2){
									int pos;
                                                                        double porcentaje;
                                                                        double sueldo;
                                                                        cout<<"Ingrese posicion que desea modificar: "<<endl;
                                                                        cin>>pos;
                                                                        cout<<"Ingrese porcentaje que desearia inflarle: "<<endl;
                                                                        cin>>porcentaje;
                                                                        	sueldo = (dynamic_cast<Lavaplatos*>(usuarios[pos]))->getSueldo();
                                                                        	porcentaje = sueldo + (sueldo*porcentaje)
                                                                        	(dynamic_cast<Lavaplatos*>(usuarios[pos]))->setSueldo(porcentaje);
                                                                        	cout<<"Se inflo exitosamente!"<<endl;

								}
			
								if(opcion5==3){
									int pos;
                                                                        double porcentaje;
                                                                        double sueldo;
                                                                        cout<<"Ingrese posicion que desea modificar: "<<endl;
                                                                        cin>>pos;
                                                                        cout<<"Ingrese porcentaje que desearia inflarle: "<<endl;
                                                                        cin>>porcentaje;
                                                                        	sueldo = (dynamic_cast<Meseros*>(usuarios[pos]))->getSueldo();
                                                                        	porcentaje = sueldo + (sueldo*porcentaje)
                                                                        	(dynamic_cast<Meseros*>(usuarios[pos]))->setSueldo(porcentaje);
                                                                        	cout<<"Se inflo exitosamente!"<<endl;

								}
					
						}
		
						if(opcion3==4)
						{
							string acum = sueldoMenor(usuarios);
							cout<<"Los empleados con el menor sueldo son: "<<endl<<acum<<endl;
						}
				
						if(opcion3==5)
						{
							string acum = sueldoMayor(usuarios);
                                                        cout<<"Los empleados con el mayor sueldo son: "<<endl<<acum<<endl;
	
						}
		
						if(opcion3==6)
						{
							double promedio = promedioSueldo(usuarios);
							cout<<"El promedio de sueldo es de: "<<promedio<<endl;
						}
					}
	
					}else{
						cout<<"Contrasena incorrecta"<<endl;
					}
		   		}
		   		else if(opcion2 == 2) // Chef
		   		{
		   			/*string platilloFavorito;
		   			int rating;

		   			// platilloFavorito
		   			cout << "Ingrese su platillo favorito: ";
		   			cin >> platilloFavorito;

		   			// rating
		   			cout << "Ingrese el rating: ";
		   			cin >> rating

		   			// Agrega el Chef al vector de Usuario.
		   			usuarios.push_back(new Chef(username, password, nombre, edad, ID, numero, anoContratacion,
		   				platilloFavorito, rating)); */

		   			Chef* C;

		   			int op2;
		   			cout << "Ingrese la posicion del Chef: ";
		   			cin >> op2;

		   			if(dynamic_cast<Chef*> (usuarios.at(op2)))
		   			{
		   				C = dynamic_cast<Chef*> (usuario.at(op2));

		   				int opcionChef = 0;
		   				while(opcionChef != 3)
		   				{
		   					cout << "CHEF" << endl;
		   					cout << "1. Gritarle a un Lavaplatos" << endl;
		   					cout << "2. Agradar a un Lavaplatos" << endl;
		   					cout << "3. Salir" << endl;
		   					cin >> opcionChef;

		   					if(opcionChef == 1) // Gritarle a un Lavaplatos
		   					{
		   						int op_LP;
		   						cout << "Escoja la posicion del Lavaplatos al que desea gritarle: ";
		   						cin >> op_LP;
		   						if(dynamic_cast<Lavaplatos*> (usuarios.at(op_LP)))
		   						{
		   							Lavaplatos* LP = dynamic_cast<Lavaplatos*> (usuarios.at(i));

		   							int gritar;
		   							cout << "Ingrese por cuanto desmotivara al Lavaplatos: ";
		   							cin >> gritar;

		   							LP -> setNivel(LP -> getNivel() - gritar);
		   							cout << "Gordon Ramsey was here." << endl;

		   							delete LP;
		   						}
		   						else
		   						{	
		   							cout << "El Usuario que escogio no es un Lavaplatos." << endl;
		   						}
		   					}
		   					else if(opcionChef == 2) // Agradar a un Lavaplatos
		   					{	
		   						int op_LP;
		   						cout << "Escoja la posicion del Lavaplatos al que desea agradar: ";
		   						cin >> op_LP;
		   						if(dynamic_cast<Lavaplatos*> (usuarios.at(op_LP)))
		   						{
		   							Lavaplatos* LP = dynamic_cast<Lavaplatos*> (usuario.at(i));

		   							int agradar;
		   							cout << "Ingrese por cuanto motivara al Lavaplatos: ";
		   							cin >> agradar;

		   							LP -> setNivel(LP -> getNivel() + agradar);
		   							cout << "Good job mate." << endl;

		   							delete LP;
		   						}
		   						else
		   						{
		   							cout << "El Usuario que escogio no es un Lavaplatos." << endl;
		   						}
		   					}
		   					else
		   					{
		   						cout << "Debe escoger una opcion valida." << endl;
		   					}
		   				}
		   				delete C;
		   			}
		   			else
		   			{
		   				cout << "El Usuario que escogio no es un Chef." << endl;
		   				break;
		   			}
		   		}
		   		else if(opcion2 == 3) // Lavaplatos
		   		{
		   			Lavaplatos* LP;

		   			int op3;
		   			cout << "Ingrese la posicion del Lavaplatos: ";
		   			cin >> op3;

		   			if(dynamic_cast<Lavaplatos*> (usuarios.at(op3)))
		   			{
		   				LP = dynamic_cast<Lavaplatos*> (usuario.at(op3));

		   				int opcionLP = 0;
		   				while(opcionLP != 3)
		   				{
		   					cout << "LAVAPLATOS" << endl;
		   					cout << "1. Renunciar" << endl;
		   					cout << "2. Pedir Aumento" << endl;
		   					cout << "3. Salir" << endl;
		   					cin >> opcionLP;

		   					if(opcionLP == 1) // Renunciar
		   					{
		   						if(LP -> getNivel() <= 25)
		   						{
		   							cout << "Ok, bye." << endl;
		   						}
		   						else
		   						{
		   							cout << "No puede renunciar." << endl;
		   						}
		   					}
		   					else if(opcionLP == 2) // Pedir Aumento
		   					{
		   						if(LP -> getNivel() >= 100)
		   						{
		   							LP -> setNivel(LP -> getNivel() + (LP -> getNivel() * 0.10));
		   							cout << "You got it." << endl;
		   						}
		   						else
		   						{
		   							cout << "No puede pedir aumento." << endl;
		   						}
		   					}
		   					else
		   					{
		   						cout << "El Usuario que escogio no es un Lavaplatos." << endl;
		   					}
		   				}
		   				delete LP;
		   			}
		   			else
		   			{
		   				cout << "El Usuario que escogio no es un Lavaplatos." << endl;
		   			}
		   		}
		   		else if(opcion2 == 4) // Mesero
		   		{
		   			Mesero* M;

		   			int op4;
		   			cout << "Ingrese la posicion del Mesero: ";
		   			cin >> op4;

		   			if(dynamic_cast<Mesero*> (usuarios.at(i)))
		   			{
		   				M = dynamic_cast<Mesero*> (usuarios.at(i));

		   				int opcionMesero;
		   				cout << "MESERO" << endl;
		   				cout << "1. Agregar Un Platillo" << endl;
		   				cout << "2. Agregar Todos los Platillos" << endl;
		   				cout << "3. Salir" << endl;
		   				cin >> opcionMesero;

		   				if(opcionMesero == 1)
		   				{
		   					string platillo;
		   					cout << "Ingrese un platillo: ";
		   					M -> setLista(platillo);

		   					cout << "Platillo agregado correctamente." << endl;
		   				}
		   				else if(opcionMesero == 2)
		   				{
		   					int n;
		   					cout << "Ingrese el numero de platillos que va a ingresar: ";
		   					M -> setPlatillos(n);
		   				}
		   				else
		   				{
		   					cout << "Debe escoger una opcion valida." << endl;
		   				}
		   			}
		   			else
		   			{
		   				cout << "El Usuario que escogio no es un Mesero." << endl;
		   			}
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
Chef* agregarChef(){
Chef* chef;
	string nombre;
        int edad,cont=0;
        string ID;
        string numero;
        string platilloFavorito;
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
        cout<<"Ingrese su platillo favorito: "<<endl;
        cin>>platilloFavorito;
	cout<<"Ingrese un rating 1-5: "<<endl;
        cin>>rating;
        while(rating<1||rating>5){
             cout<<"El numero debe ser entre 1-5. Intente nuevamente: "<<endl;
             cin>>rating;
        }
        double sueldo;
        cout<<"Ingrese el sueldo: "<<endl
        cin>>sueldo;
	chef=new Chef(username, password, nombre, edad, ID, numero, 2017, platilloFavorito, rating,sueldo);
return chef;
}

Lavaplatos* agregarLavaplatos(){
Lavaplatos* lavaplatos;
	string nombre;
        int edad,cont=0,nivel;
        string ID;
        string numero;
        string platilloFavorito;
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
        nivel=50;
	double sueldo;
        cout<<"Ingrese el sueldo: "<<endl;
        cin>>sueldo;
        lavaplatos=new Lavaplatos(username, password, nombre, edad, ID, numero, 2017, nivel,sueldo);
return lavaplatos;
}

Meseros* agregarMesero(){
Meseros* mesero;
	string nombre;
        int edad,cont=0;
        string ID;
        string numero;
        string platilloFavorito;
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
                 double sueldo;
                 cout<<"Ingrese el sueldo: "<<endl;
                 cin>>sueldo;
		 mesero = new Meseros(username, password, nombre, edad, ID, numero, anoContratacion,sueldo);
return mesero;
}

int eliminar(){
int pos;
	cout<<"Que posicion desea eliminar?"<<endl;
return pos;
}

string sueldoMenor(vector<Usuario*> usuarios){
string acum;
int sueldomenor=100000000000000;
	for(int i=0; i<usuarios.size();i++){
		if(usuarios[i]->getSueldo()<sueldomenor){
			sueldomenor=usuarios[i]->getSueldo();
		}	
	}
	for(int i=0; i<usuarios.size();i++){
		if(usuarios[i]->getSueldo()==sueldomenor){
			acum= acum+usuarios[i]->getNombre()+"\n"
		}

return acum;
}

string sueldoMayor(vector<Usuario*> usuarios){
string acum;
int sueldomayor=0;
        for(int i=0; i<usuarios.size();i++){
                if(usuarios[i]->getSueldo()>sueldomayor){
                        sueldomayor=usuarios[i]->getSueldo();
                }
        }
        for(int i=0; i<usuarios.size();i++){
                if(usuarios[i]->getSueldo()==sueldomayor){
                        acum=acum+ usuarios[i]->getNombre()+"\n"
                }

return acum;
}

int promedioSueldo(vector<Usuario*> usuarios){
int acum;
int size=usuarios.size();
	for(int i=0; i<usuarios.size();i++){
		acum=acum+usuarios[i]-> getSueldo();
	}
double promedio;
	promedio=acum/size;
return promedio;
}


