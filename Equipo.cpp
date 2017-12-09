#include "Equipo.h"

Equipo::Equipo(vector<Minion*>plista){
  this->lista=plista;
}

vector<Minion*> Equipo::getLista(){
  return lista;
}
void Equipo::Agregar(Minion* minion){
  this->lista.push_back(minion);
}
Equipo::~Equipo(){
  for (int i = 0; i < lista.size(); i++) {
    delete lista.at(i);
  }
}
