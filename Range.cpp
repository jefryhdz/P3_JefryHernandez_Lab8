#include "Range.h"

Range::Range(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,double prango):Minion(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza){
  this->rango=prango;
}
Range::Range(){

}

double Range::getRango(){
  return rango;
}

void Range::setRango(double Rango){
  this->rango=Rango;
}

Range::~Range(){

}

int Range::Ataque(Minion* minion){
  return 0;
}
