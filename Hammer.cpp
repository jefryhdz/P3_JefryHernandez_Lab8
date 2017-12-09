#include "Hammer.h"
#include<math.h>
#include<time.h>
#include<ctime>

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

int Hammer::Ataque(Minion* minion,bool ataque){
  int attack;
  if (ataque) {
    attack=1000;
  }else{
    if (dynamic_cast<Flying*>(minion)!=NULL) {
        attack= Fuerza+(Fuerza*0.5);
        attack*=minion->getDefensa();
    }
  }
  return attack;
}
