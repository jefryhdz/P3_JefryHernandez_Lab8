#include "Minion.h"

Minion::Minion(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza){
  nombre= pnombre;
  batalla=pbatalla;
  Exp=pexp;
  HP=pHP;
  Defensa=pdefensa;
  Velocidad=pvelocidad;
  Fuerza=pfuerza;
}

Minion::Minion(){}

string Minion::getNombre(){
  return nombre;
}
void Minion::setNombre(string Nombre){
  this->nombre=Nombre;
}

int Minion::getBatalla(){
  return batalla;
}
void Minion::setBatalla(int Batalla){
  this->batalla=Batalla;
}

double Minion::getExp(){
  return Exp;
}

double Minion::getHP(){
  return HP;
}
void Minion::setHP(double hp){
  this->HP=hp;
}

double Minion::getDefensa(){
  return Defensa;
}
void Minion::setDefensa(double defense){
  this->Defensa=defense;
}

double Minion::getVelocidad(){
  return Velocidad;
}
void Minion::setVelocidad(double speed){
  this->Velocidad=speed;
}

double Minion::getFuerza(){
  return Fuerza;
}
void Minion::setFuerza(double fuerz){
  this->Fuerza=fuerz;
}

Minion::~Minion(){
}

int Minion::Ataque(Minion* minion){
  return 0;
}
