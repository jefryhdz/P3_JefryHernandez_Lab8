#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "Melee.h"
#include "Range.h"

using namespace std;


#ifndef CHAIN_H
#define CHAIN_H
class Chain : public Melee{
	protected:
		string color;

	public:
		Chain(string,int,double,double,double,double,double,string,string);
		Chain();

		string getColor();
		void setColor(string);

		~Chain();
		int Ataque(Minion*,bool);

};
#endif
