#include "Paratroopa.h"
Paratroopa::Paratroopa(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pvuelo,string pcolor):Flying(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza,pvuelo){
  this->color=pcolor;
}
Paratroopa::Paratroopa(){
}

string Paratroopa::getColor(){
  return color;
}
void Paratroopa::setColor(string colore){
  this->color = colore;
}

Paratroopa::~Paratroopa(){

}

int Paratroopa::Ataque(Minion* minion){
  return 0;
}
