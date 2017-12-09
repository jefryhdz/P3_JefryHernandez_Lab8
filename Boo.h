#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Flying.h"

using namespace std;


#ifndef BOO_H
#define BOO_H
class Boo : public Flying{
	protected:
		string color;

	public:
		Boo(string,int,double,double,double,double,double,string,string);
		Boo();

		string getColor();
		void setColor(string);

		~Boo();
		int Ataque(Minion*);

};
#endif
