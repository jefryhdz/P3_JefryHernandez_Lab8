#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include<math.h>
#include<time.h>
#include<ctime>
#include <fstream>

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
#include "Equipo.h"

using namespace std;

int Menu();
int Menutipo();
int MenuMelee();
int MenuFlying();
int MenuRange();
double validarHP(int,int);
vector<Minion*>Eliminar(vector<Minion*>);
void Pelear(vector<Minion*>,vector<Minion*>);
void Escribir(string);

int main() {
  vector<Minion*>lista;
  vector<Minion*>inutilizados;
  vector<Equipo*>equipos;
  int numero=0;
  Minion* minion;
int resp;
  do {
     resp = Menu();
    int menu=-1;

    int menu2;
    double HP;
    string nombre;
    if (resp==1) {
      menu=Menutipo();
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
          inutilizados.push_back(minion);
        }else if (menu2==2) {
          string color;
          cout<<"Ingrese el Color del Chain"<<endl;
          cin>>color;
          HP=validarHP(10,30);
          minion= new Chain(nombre,0,0,HP,0,60.20,15,intimidacion,color);
          lista.push_back(minion);
          inutilizados.push_back(minion);
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
          inutilizados.push_back(minion);
        }else if (menu2==2) {
          string color;
          cout<<"Ingrese el Color del Caparazon"<<endl;
          cin>>color;
          HP=validarHP(40,60);
          minion = new Paratroopa(nombre,0,0,HP,0.20,0.35,8,vuelo,color);
          lista.push_back(minion);
          inutilizados.push_back(minion);
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
          inutilizados.push_back(minion);
        }else if (menu2==2) {
          string color;
          cout<<"Ingrese el Color del traje de Magikoopa"<<endl;
          cin>>color;
          HP=validarHP(50,70);
          minion = new Magikoopa(nombre,0,0,0,HP,0.15,0.30,rango,color);
          lista.push_back(minion);
          inutilizados.push_back(minion);
        }
      }
    }else if (resp==2) {
      lista= Eliminar(lista);
    }else if (resp==3) {
      if (inutilizados.size()>0) {
        char answer='S';
        Minion* minio;
        do {
          string respuesta,eleccion;
          int replied;
          for (int i = 0; i < inutilizados.size(); i++) {
            cout<<i<<". "<<inutilizados.at(i)->getNombre()<<endl;
          }

          do {
            cout<<"Ingrese la posicion para agregar a un equipo"<<endl;
            cin>>eleccion;
            replied=atoi(eleccion.c_str());
          } while(replied<0||replied>inutilizados.size());
          minio= inutilizados.at(replied);
          if (equipos.size()>0) {
            for (int i = 0; i < equipos.size(); i++) {
              if ((equipos.at(i))->getLista().size()<7) {
                cout<<i<<endl;
              }
            }
            int numerolista;
            cout<<"Ingrese el numero de la lista"<<endl;
            cin>>numerolista;
            equipos.at(numerolista)->Agregar(minio);
          }else{
            vector<Minion*> listas;
            listas.push_back(minio);
            Equipo* teams= new Equipo(listas);
            equipos.push_back(teams);
          }
          cout<<"Desea agregar otro [S/N]"<<endl;
          cin>>answer;
        } while(answer=='S'||answer!='s');
      }
    }else if (resp==4) {
      if (equipos.size()>0&&inutilizados.size()>0) {
        int team;
        string pos;
        do {
          cout<<"Escoja el numero de equipo a modificar entre 0 y "<<equipos.size()-1<<endl;
          cin>>pos;
          team=atoi(pos.c_str());
        } while(team<0&&team>equipos.size()-1);
        for (int i = 0; i < ((equipos.at(team))->getLista()).size()>0; i++) {
          cout<<i<<". "<<equipos.at(team)->getLista().at(i)->getNombre()<<endl;
        }
        do
        {
          cout<<"Escoja el numero del minion a modificar entre 0 y "<<((equipos.at(team))->getLista()).size()-1<<endl;
          cin>>pos;
          team=atoi(pos.c_str());
        } while(team<0&&team>((equipos.at(team))->getLista()).size()-1);
        int posic;
        Minion* personaje= ((equipos.at(team))->getLista()).at(team);
        posic=team;
        ((equipos.at(team))->getLista()).erase(((equipos.at(team))->getLista()).begin()+team);
        for (int i = 0; i < inutilizados.size(); i++) {
          cout<<i<<". "<<inutilizados.at(i)->getNombre()<<endl;
        }
        int posicion2;
        do
        {
          cout<<"Escoja el numero de minion a reemplazar entre 0 y "<<inutilizados.size()-1<<endl;
          cin>>pos;
          posicion2=atoi(pos.c_str());
        } while(posicion2<0&&posicion2>inutilizados.size()-1);
        Minion* dos=inutilizados.at(posicion2);
        inutilizados.erase(inutilizados.begin()+posicion2);
        inutilizados.push_back(personaje);
         ((equipos.at(posic))->getLista()).push_back(dos);
      }else{
        cout<<"No hay suficiente minions para reemplazar"<<endl;
      }
    }else if (resp==5) {
      for (int i = 0; i < equipos.size(); i++) {
        if (equipos.at(i)->getLista().size()==7) {
          cout<<i<<endl;
        }
      }
      string posicio2,poxs;
      int position,location;
      int salir =-1;
      do
      {
        cout<<"Escoja el numero del equipo 1 "<<endl;
        cin>>poxs;
        cout<<"Escoja el numero del equipo 2 "<<endl;
        cin>>posicio2;
        position=atoi(poxs.c_str());
        location= atoi(posicio2.c_str());
        if ((position>0&&position<equipos.size())&&((location>0&&location<equipos.size()))) {
          if ((((equipos.at(position))->getLista()).size()==7)&&(((equipos.at(location))->getLista()).size()==7)) {
            salir =1;
          }
        }
      } while(salir!=1);
    }

  } while(resp!=6);
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
  } while(resp<1||resp>3);
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
  } while(resp<1||resp>2);
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
  } while(resp<1||resp>2);
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
  } while(resp<1||resp>2);
  return resp;

}

int Menu(){
  int ans=-1;
   while(ans<1||ans>6){
    cout<<"1. Agregar un minion"<<endl;
    cout<<"2. Eliminar un minion"<<endl;
    cout<<"3. Crear equipos"<<endl;
    cout<<"4. Modificar equipos"<<endl;
    cout<<"5. Simulacion de pelea"<<endl;
    cout<<"6. Salir"<<endl;
    cin>>ans;
  }
  return ans;
}

double validarHP(int menor,int mayor){
  double numero;
  string seleccion;
  do {
    cout<<"Ingrese un numero entre "<<menor<<" y "<<mayor<<endl;
    cin>>seleccion;
    numero = atoi(seleccion.c_str());
  } while(numero<menor||numero>mayor);
  return numero;
}

vector<Minion*>Eliminar(vector<Minion*> lista){
  if (lista.size()>0) {
    string seleccion;
    for (int i = 0; i < lista.size(); i++) {
      cout<<i<<". "<<lista.at(i)->getNombre()<<endl;
    }
    int resp;
    do {
      cout<<"Ingrese la posicion del minion a eliminar"<<endl;
      cin>>seleccion;
      resp=atoi(seleccion.c_str());
    } while(resp<0||resp>lista.size());
    lista.erase(lista.begin()+resp);
  }
  return lista;
}

void Pelear(vector<Minion*> lista1,vector<Minion*>lista2){
  int conta=0,contb=0;
  int vel;
  string escribir;
  bool ataque=false;
  for (int i = 1; i < 7; i++) {
    int cont=1;
    int rand1 = 1+rand()%5;
    int rand2 = 1+rand()%5;
    while(lista1.at(i)->getHP()>0&&lista2.at(i)->getHP()>0){
      if (cont%2!=0) {
        if (rand1==cont) {
          ataque=true;
          escribir="Ataque especial equipo 1";
          Escribir(escribir);
        }
        vel= 1+rand()%10;
        if (vel<=lista2.at(i)->getVelocidad()) {
          lista1.at(i)->Ataque(lista2.at(i),ataque);
          escribir= "Acerto el golpe equipo 1";
          Escribir(escribir);
        }else{
          escribir= "Fallo el ataque equipo 1";
          Escribir(escribir);
        }
      }else{
        if (rand2==cont) {
          ataque=true;
          escribir="Ataque especial equipo 2";
          Escribir(escribir);
        }
        vel= 1+rand()%10;
        if (vel<=lista1.at(i)->getVelocidad()) {
          lista2.at(i)->Ataque(lista1.at(i),ataque);
          escribir= "Acerto el golpe equipo 2";
          Escribir(escribir);
        }else{
          escribir= "Fallo el ataque equipo 2";
          Escribir(escribir);
        }
      }
    }if (lista1.at(i)->getHP()==0) {
      contb++;
    }else{
      conta++;
    }
  }
  if (conta==contb) {
    int rand1 = 1+rand()%5;
    int rand2 = 1+rand()%5;
    int cont=1;
    while(lista1.at(0)->getHP()>0&&lista2.at(0)->getHP()>0){
      if (cont%2!=0) {
        if (rand1==cont) {
          ataque=true;
        }
        vel= 1+rand()%10;
        if (vel<=lista2.at(0)->getVelocidad()) {
          lista1.at(0)->Ataque(lista2.at(0),ataque);
        }
      }else{
        if (rand2==cont) {
          ataque=true;
        }
        vel= 1+rand()%10;
        if (vel<=lista1.at(0)->getVelocidad()) {
          lista2.at(0)->Ataque(lista1.at(0),ataque);
        }
      }
      cont++;
    }if (lista1.at(0)->getHP()==0) {
      contb++;
    }else{
      conta++;
    }
  }
}
void Escribir(string Bitacora){
  ofstream archivo("LOG.txt", fstream::app | std::ios::out);
  if (archivo.is_open()) {
    archivo << "\n"<<Bitacora;
    archivo.close();
  }
}
