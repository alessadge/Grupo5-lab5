#include "Personal.h"
#include "Usuarios.h"
Personal::Personal(string username, string password, string nombre,int edad,string ID,string numero,int anoContratacion):Usuarios(username,password,nombre,edad,ID,numero){
    this->anoContratacion=anoContratacion;
}
Personal::Personal(){

}void Personal::setAnoContratacion(int anoContratacion){
   this-> anoContratacion=anoContratacion;
}
int Personal::getAnoContratacion(){
   return anoContratacion;
}
