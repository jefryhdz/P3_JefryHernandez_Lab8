#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Range.h"
#include "Flying.h"

using namespace std;


#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H
class Magikoopa : public Range{
	protected:
		string Color;

	public:
		Magikoopa(string,int,double,double,double,double,double,double,string);
		Magikoopa();

		string getColor();
		void setColor(string);

		~Magikoopa();
		int Ataque(Minion*,bool);

};
#endif
