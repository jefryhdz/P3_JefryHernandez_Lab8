#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Flying.h"

using namespace std;


#ifndef PARATROOPA_H
#define PARATROOPA_H
class Paratroopa : public Flying{
	protected:
		string color;

	public:
		Paratroopa(string,int,double,double,double,double,double,string,string);
		Paratroopa();

		string getColor();
		void setColor(string);

		~Paratroopa();
		int Ataque(Minion*);

};
#endif
