#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Minion.h"

using namespace std;


#ifndef EQUIPO_H
#define EQUIPO_H
class  Equipo {
	protected:
		vector<Minion*>lista;

	public:
    Equipo(vector<Minion*>);
		vector<Minion*> getLista();
		void Agregar(Minion*);

		~Equipo();


};
#endif
