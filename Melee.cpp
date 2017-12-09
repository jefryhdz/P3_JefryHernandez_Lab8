#include "Melee.h"
Melee::Melee(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pintimidar):Minion(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza){
  this->intimidar=pintimidar;
}
Melee::Melee(){}
string Melee::getIntimidar(){
  return intimidar;
}
void Melee::setIntimidar(string intimida){
  this->intimidar=intimida;
}

Melee::~Melee(){}

int Melee::Ataque(Minion* minion){
  return 0;
}
