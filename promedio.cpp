
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mayor=0,menor=0;
    double promedio, numeros=0, suma=0, nota, cantidades;
    cout<<"ingresar notas: ";
    cin>>cantidades;
    while(cantidades!=0){
        cout<<"ingresa la nota:";
        cin>>nota;
        if(nota>mayor){
            mayor=nota;
        }
        if(nota<mayor){
            menor=nota;
        }
        suma=suma+nota;
        numeros=numeros+1;
        cantidades=cantidades-1;
    }
    if(mayor>nota){
        menor=nota;
    }
    promedio=suma/numeros;
    cout<<"el promedio es:"<<promedio<<endl;
    cout<<"la mayor nota es:"<<mayor<<endl;
    cout<<"la menor nota es:"<<menor;
    return 0;
}    