#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Range.h"

using namespace std;


#ifndef HAMMER_H
#define HAMMER_H
class Hammer : public Range{
	protected:
		double martillos;

	public:
		Hammer(string,int,double,double,double,double,double,double,double);
		Hammer();

		double getMartillos();
		void setMartillos(double);

		~Hammer();
		int Ataque(Minion*);

};
#endif
