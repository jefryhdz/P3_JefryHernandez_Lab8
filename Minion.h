#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


#ifndef MINION_H
#define MINION_H
class Minion{
	protected:
		string nombre;
		int batalla;
		double exp;
    double HP;
    double Defensa;
    double Velocidad;
    double Fuerza;

	public:
		Minion(string,int,double,double,double,double,double);
		Minion();

		string getNombre();
		void setNombre(string);

		int getBatalla();
		void setBatalla(int);

		double getExp();
		void setExp(double);

    double getHP();
		void setHP(double);

    double getDefensa();
		void setDefensa(double);

    double getVelocidad();
		void setVelocidad(double);

    double getFuerza();
    void setFuerza(double);

		virtual~Minion();
		virtual int Ataque(Minion*);

};
#endif
