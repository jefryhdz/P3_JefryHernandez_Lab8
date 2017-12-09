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
int Chain::Ataque(Minion* minion){
  return 0;
}
