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
		Flying(string,int,double,double,double,double,double,double,string,string);
		Flying();

		string getColor();
		void setColor(string);

		~Boo();
		int Ataque(Minion*);

};
#endif
