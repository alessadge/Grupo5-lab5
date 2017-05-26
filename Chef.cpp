#include "Chef.h"

Chef::Chef(string platilloFavorito,int rating){
    this->platilloFavorito=platilloFavorito;
    this->rating=rating;
}
Chef::Chef(){

}void Chef::setPlatilloFavorito(string platilloFavorito){
   this-> platilloFavorito=platilloFavorito;
}
string Chef::getPlatilloFavorito(){
   return platilloFavorito;
}
void Chef::setRating(int rating){
   this-> rating=rating;
}
int Chef::getRating(){
   return rating;
}
