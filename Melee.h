#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Minion.h"

using namespace std;


#ifndef MELEE_H
#define MELEE_H
class Melee : public Minion{
	protected:
		string intimidar;

	public:
		Melee(string,int,double,double,double,double,double,string);
		Melee();

		string getIntimidar();
		void setIntimidar(string);

		~Melee();
		int Ataque(Minion*);

};
#endif
