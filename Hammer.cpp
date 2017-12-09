#include "Hammer.h"

Hammer::Hammer(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,double prango,double pmartillos):Range(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza,prango){
  this->martillos=pmartillos;
}
Hammer::Hammer(){

}

double Hammer::getMartillos(){
  return martillos;
}
void Hammer::setMartillos(double hammer){
    this->martillos=hammer;
}

Hammer::~Hammer(){
}

int Hammer::Ataque(Minion* minion){
  return 0;
}
