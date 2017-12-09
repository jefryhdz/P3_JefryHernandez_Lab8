#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Minion.h"

using namespace std;


#ifndef RANGE_H
#define RANGE_H
class Range  : public Minion{
	protected:
		double rango;

	public:
		Range(string,int,double,double,double,double,double,double);
		Range();

		double getRango();
		void setRango(double);

		~Range();
		int Ataque(Minion*);

};
#endif
