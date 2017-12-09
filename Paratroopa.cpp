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

int Paratroopa::Ataque(Minion* minion,bool ataque){
  int attack;
  if (ataque) {
    Defensa =0.80;
  }
  if (dynamic_cast<Melee*>(minion)!=NULL) {
    attack = (Fuerza+(Fuerza*0.5));
    attack*= minion->getDefensa();
  }else{
    attack = (Fuerza*(minion->getDefensa()));
  }
  return attack;
}
