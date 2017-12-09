#include "Magikoopa.h"

Magikoopa::Magikoopa(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,double prango,string pcolor):Range(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza,prango){
  this->Color=pcolor;
}
Magikoopa::Magikoopa(){

}

string Magikoopa::getColor(){
  return Color;
}
void Magikoopa::setColor(string color){
  this->Color=color;
}

Magikoopa::~Magikoopa(){

}
int Magikoopa::Ataque(Minion* minion,bool ataque){
  int attack;
  if (ataque) {
    HP+=25;
    if (dynamic_cast<Flying*>(minion)!=NULL) {
      attack= Fuerza+(Fuerza*0.5);
      attack*=minion->getDefensa();
    }
  }else{
    if (dynamic_cast<Flying*>(minion)!=NULL) {
        attack= Fuerza+(Fuerza*0.5);
        attack*=minion->getDefensa();
    }
  }
  return attack;
}
