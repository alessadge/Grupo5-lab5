#include "Usuario.h"

Usuario::Usuario(string username,string password,string nombre,int edad,string ID,string numero){
    this->username=username;
    this->password=password;
    this->nombre=nombre;
    this->edad=edad;
    this->ID=ID;
    this->numero=numero;
}
Usuario::Usuario(){

}void Usuario::setUsername(string username){
   this-> username=username;
}
string Usuario::getUsername(){
   return username;
}
void Usuario::setPassword(string password){
   this-> password=password;
}
string Usuario::getPassword(){
   return password;
}
void Usuario::setNombre(string nombre){
   this-> nombre=nombre;
}
string Usuario::getNombre(){
   return nombre;
}
void Usuario::setEdad(int edad){
   this-> edad=edad;
}
int Usuario::getEdad(){
   return edad;
}
void Usuario::setID(string ID){
   this-> ID=ID;
}
string Usuario::getID(){
   return ID;
}
void Usuario::setNumero(string numero){
   this-> numero=numero;
}
string Usuario::getNumero(){
   return numero;
}
