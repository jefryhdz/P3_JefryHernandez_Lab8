#include "Boo.h"

Boo::Boo(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pvuelo,string pcolor):Flying(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza,pvuelo){
  this->color= pcolor;
}
Boo::Boo(){

}

string Boo::getColor(){
  return color;
}

void Boo::setColor(string colore){
  this->color=colore;
}

Boo::~Boo(){

}

int Boo::Ataque(Minion* minion){

}
