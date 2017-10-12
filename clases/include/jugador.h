#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include<iostream>
using namespace std;
class jugador
{
    private:
        int num,ag;
        string nom,po;
    public:
         jugador();
         jugador(string nom,int num,string po,int ag);
         void setnombre(string a);
         void setnumero(int b);
         void setposicion(string c);
         void setagresividad(int d);
         void print();

};

#endif // JUGADOR_H
