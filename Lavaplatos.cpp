#include "Lavaplatos.h"

Lavaplatos::Lavaplatos(int nivel){
    this->nivel=nivel;
}
Lavaplatos::Lavaplatos(){

}void Lavaplatos::setNivel(int nivel){
   this-> nivel=nivel;
}
int Lavaplatos::getNivel(){
   return nivel;
}
