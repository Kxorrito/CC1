#include <iostream>

using namespace std;

bool aniobiciesto(int anio){
    if(anio % 4 == 0){
        if (anio%100 != 0 || anio % 400 == 0){
            return true;
        }
    }
    else
            return false;
}


/*int main()
{
    int anio;
      cout<<"ingrese el anio:";
        cin>>anio;
        if(aniobiciesto(anio)==true){
            cout<<"Es biciesto";
            }
        else
            cout<<"No es biciesto";

}*/



int nesimoprimo(int l){
    int a,b=0,y=1;
    while(l!=b){
            a=0;
            y=y+1;
            for(int z=2;z<1000;z+=1){
                if(y%z==0){
                    a=a+1;
                }
            }
        if(a<2){
            b=b+1;
        }
        if(a<2&l==b){
            return y;

        }
    }
}
/*int main()
{
    int x,nesimo;
            cout<<"ingrese numero: ";
            cin>>x;
            nesimo=(nesimoprimo(x));
            cout<<"el nesimo numero primo de "<<x<<" es: "<<nesimo;
}*/


bool primo(int numero){
    int divisor=0,i;
    for(i=1;i<(numero+1);i=i+1){
        if ((numero%i)==0){
            divisor=divisor+1;
        }
    }
    if(divisor!=2){
        return false;
    }
    else
        return true;
}
/*int main ()
{
    int numero;
            cout<<"ingrese numero: ";
            cin>>numero;
            if(primo(numero)==true){
                cout<<"es primo";
            }
            else
                cout<<"no es primo";
}*/
bool potencia(int x){
    while(x%2==0){
        x=x/2;
    }
    if(x==1){
        return true;
    }
    else
        return false;
}

/*int main()
{
int numero;
        cout<<"ingrese un numero potenciado a dos: ";
        cin>>numero;
        if(potencia(numero)==true){
            cout<<numero<<" es potencia de dos";
        }
        else
            cout<<numero<<" no es potencia de dos";
}*/
bool potencia2(int x){
    if((x & (x-1)) == 0){
        return true;
    }
    else
        return false;
}
int main ()
{
    int numero;
        cout<<"ingrese un numero potencia de dos: ";
        cin>>numero;
        if(potencia2(numero)==true){
            cout<<numero<<" es potencia de dos";
        }
        else
            cout<<numero<<" no es potencia de dos";
}




