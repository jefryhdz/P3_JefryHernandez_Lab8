#include "Chain.h"

Chain::Chain(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pintimidar,string pcolor):Melee(pnombre,pbatalla,pexp,pHP,pdefensa,pvelocidad,pfuerza,pintimidar){
  this->color=pcolor;
}
Chain::Chain(){}

string Chain::getColor(){
  return color;
}

void Chain::setColor(string Color){
  this->color = Color;
}

Chain::~Chain(){
}
int Chain::Ataque(Minion* minion,bool ataque){
  int attack;
  if (ataque) {
    attack=Fuerza+20;
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
