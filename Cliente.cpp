#include "Cliente.h"

Cliente::Cliente(string username,string password,string nombre,int edad, string ID,string numero,string direccion,int rating):Usuario(username, password, nombre,edad,ID,numero){
    this->direccion=direccion;
    this->rating=rating;
}
Cliente::Cliente(){

}void Cliente::setDireccion(string direccion){
   this-> direccion=direccion;
}
string Cliente::getDireccion(){
   return direccion;
}
void Cliente::setRating(int rating){
   this-> rating=rating;
}
int Cliente::getRating(){
   return rating;
}
