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
int Magikoopa::Ataque(Minion* minion){
  return 0;
}
