#include "jugador.h"
jugador::jugador(){
    nom="jugador";
    num=0;
    po="0";
    ag=0;
}

jugador::jugador(string a,int b,string c,int d){
    nom=a;
    num=b;
    po=c;
    ag=d;
}
void jugador::setnombre(string a){
    nom=a;
}
void jugador::setnumero(int b){
    num=b;
}
void jugador::setposicion(string c){
    po=c;
}
void jugador::setagresividad(int d){
    ag=d;
}
void jugador::print(){
    cout<<"el nombre del jugardor:"<<nom<<endl;
    cout<<"el numero del jugardor:"<<num<<endl;
    cout<<"la posicion del jugardor:"<<po<<endl;
    if (ag>10){
        cout<<"el jugador es muy agresivo cambialo"<<endl;
    }
    else{
        cout<<"el jugador esta punto de entrar"<<endl;
    }
}
