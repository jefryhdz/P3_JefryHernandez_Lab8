#include "Goomba.h"

Goomba::Goomba(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pintimidar,string psize):Melee(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza,pintimidar){
  this->size=psize;
}
Goomba::Goomba(){
}
string Goomba::getSize(){
  return size;
}
void Goomba::setSize(string siz){
  this->size= siz;
}

Goomba::~Goomba(){
}

int Goomba::Ataque(Minion* minion,bool ataque){
  int attack;
  if (ataque) {
    attack=Fuerza+10;
    if (dynamic_cast<Range*>(minion)!=NULL) {
      attack+=(attack*0.5);
    }
    attack*=minion->getDefensa();
  }else{
    attack=Fuerza;
    if (dynamic_cast<Range*>(minion)!=NULL) {
      attack+=(attack*0.5);
    }    
    attack*=minion->getDefensa();
  }

  return attack;

}
