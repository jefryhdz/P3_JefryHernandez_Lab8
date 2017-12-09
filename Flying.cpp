#include "Flying.h"

Flying::Flying(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pvuelo):Minion(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza){
  this->vuelo=pvuelo;
}
Flying::Flying(){
}

string Flying::getVuelo(){
  return vuelo;
}
void Flying::setVuelo(string fly){
  this->vuelo=fly;
}

Flying::~Flying(){

}

int Flying::Ataque(Minion*){
  return 0;
}
