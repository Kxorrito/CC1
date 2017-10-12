#include<iostream>
#include<sstream>
#include "jugador.h"
#include <string>
using namespace std;
int main(){
    jugador a;
    jugador b("guerrero",10,"delantero",5);
    a.print();
    return 0;
}

