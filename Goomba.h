#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Melee.h"
#include "Range.h"

using namespace std;


#ifndef GOOMBA_H
#define GOOMBA_H
class Goomba : public Melee{
	protected:
		string size;

	public:
		Goomba(string,int,double,double,double,double,double,string,string);
		Goomba();

		string getSize();
		void setSize(string);

		~Goomba();
		int Ataque(Minion*,bool);

};
#endif
