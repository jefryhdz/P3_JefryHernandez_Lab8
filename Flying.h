#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Minion.h"

using namespace std;


#ifndef FLYING_H
#define FLYING_H
class Flying : public Minion{
	protected:
		string vuelo;

	public:
		Flying(string,int,double,double,double,double,double,string);
		Flying();

		string getVuelo();
		void setVuelo(string);

		~Flying();
		int Ataque(Minion*);

};
#endif
