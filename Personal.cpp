#include "Personal.h"
#include "Usuario.h"
Personal::Personal(string username, string password, string nombre,int edad,string ID,string numero,int anoContratacion):Usuario(username,password,nombre,edad,ID,numero){
    this->anoContratacion=anoContratacion;
}
Personal::Personal(){

}void Personal::setAnoContratacion(int anoContratacion){
   this-> anoContratacion=anoContratacion;
}
int Personal::getAnoContratacion(){
   return anoContratacion;
}
