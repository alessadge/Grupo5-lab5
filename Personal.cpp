#include "Personal.h"

Personal::Personal(int anoContratacion){
    this->anoContratacion=anoContratacion;
}
Personal::Personal(){

}void Personal::setAnoContratacion(int anoContratacion){
   this-> anoContratacion=anoContratacion;
}
int Personal::getAnoContratacion(){
   return anoContratacion;
}
