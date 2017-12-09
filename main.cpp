#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>

#include "Hammer.h"
#include "Boo.h"
#include "Chain.h"
#include "Flying.h"
#include "Goomba.h"
#include "Magikoopa.h"
#include "Melee.h"
#include "Minion.h"
#include "Paratroopa.h"
#include "Range.h"

using namespace std;

int Menutipo();
int MenuMelee();
int MenuFlying();
int MenuRange();
double validarHP(int,int);

int main() {
  vector<Minion*>lista;
  Minion* minion;
  int menu=Menutipo();
  int menu2;
  double HP;
  string nombre;
  cout<<"Ingrese el nombre"<<endl;
  cin>>nombre;
  if (menu==1) {
    string intimidacion;
    menu2=MenuMelee();
    cout<<"Ingrese el nivel de intimidacion"<<endl;
    cin>>intimidacion;
    if (menu2==1) {
      string size;size,
      cout<<"Ingrese el tamaño del Goomba"<<endl;
      cin>>size;
      HP=validarHP(20,40);
      //Goomba::Goomba(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pintimidar,string psize)
      minion= new Goomba(nombre,0,0,HP,0,0.65,10,intimidacion,size);
      lista.push_back(minion);
    }else if (menu2==2) {
      string color;
      cout<<"Ingrese el Color del Chain"<<endl;
      cin>>color;
      HP=validarHP(10,30);
      minion= new Chain(nombre,0,0,HP,0,60.20,15,intimidacion,color);
      lista.push_back(minion);
    }
  }else if (menu==2) {
    menu2=MenuFlying();
    string vuelo;
    cout<<"Ingrese la habilidad de vuelo"<<endl;
    cin>>vuelo;
    if (menu2==1) {
      //tring pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,string pvuelo,string pcolor
      string color;
      cout<<"Ingrese el Color del Boo"<<endl;
      cin>>color;
      HP=validarHP(20,40);
      minion = new Boo(nombre,0,0,HP,0.20,0.35,8,vuelo,color);
      lista.push_back(minion);
    }else if (menu2==2) {
      string color;
      cout<<"Ingrese el Color del Caparazon"<<endl;
      cin>>color;
      HP=validarHP(40,60);
      minion = new Paratroopa(nombre,0,0,HP,0.20,0.35,8,vuelo,color);
    }
  }else if (menu==3) {
    menu2=MenuRange();
    double rango;
    cout<<"Ingrese el rango del minion"<<endl;
    cin>>rango;
    if (menu2==1) {
      //(string pnombre,int pbatalla,double pexp,double pHP,double pdefensa,double pvelocidad,double pfuerza,double prango,double pmartillos
      double martillos;
      cout<<"Ingrese el tamaño de los martillos"<<endl;
      cin>>martillos;
      HP=validarHP(60,80);
      minion = new Hammer(nombre,0,0,0,HP,0.15,0.30,rango,martillos);
      lista.push_back(minion);
    }else if (menu2==2) {
      string color;
      cout<<"Ingrese el Color del traje de Magikoopa"<<endl;
      cin>>color;
      HP=validarHP(50,70);
      minion = new Magikoopa(nombre,0,0,0,HP,0.15,0.30,rango,color);
      lista.push_back(minion);
    }
  }
  return 0;
}

int Menutipo(){
  int resp;
  string seleccion;
  do {
    cout<<"-------------Escoja el tipo de Minion----------"<<endl<<
    cout<<"1. Melee"<<endl<<
    cout<<"2. Flying"<<endl<<
    cout<<"3. Range"<<endl;
    cin>>seleccion;
    resp = atoi(seleccion.c_str());
  } while(resp<1&&resp>3);
  return resp;
}

int MenuMelee(){
  int resp;
  string seleccion;
  do {
    cout<<"-------------Escoja el tipo de Melee----------"<<endl;
    cout<<"1. Goomba"<<endl;
    cout<<"2. Chain"<<endl;
    cin>>seleccion;
    resp = atoi(seleccion.c_str());
  } while(resp<1&&resp>2);
  return resp;
}
int MenuFlying(){
  int resp;
  string seleccion;
  do {
    cout<<"-------------Escoja el tipo de Flying----------"<<endl;
    cout<<"1. Boo"<<endl;
    cout<<"2. Paratroopa"<<endl;
    cin>>seleccion;
    resp = atoi(seleccion.c_str());
  } while(resp<1&&resp>2);
  return resp;
}
int MenuRange(){
  int resp;
  string seleccion;
  do {
    cout<<"-------------Escoja el tipo de Range----------"<<endl;
    cout<<"1. Hammer"<<endl;
    cout<<"2. Magikoopa"<<endl;
    cin>>seleccion;
    resp = atoi(seleccion.c_str());
  } while(resp<1&&resp>2);
  return resp;

}

double validarHP(int menor,int mayor){
  double numero;
  string seleccion;
  do {
    cout<<"Ingrese un numero entre "<<menor<<" y "<<mayor<<endl;
    cin>>seleccion;
    numero = atoi(seleccion.c_str());
  } while(numero<menor&&numero>mayor);
  return numero;
}
