#include <iostream>
#include <string>
using namespace std;
int main(){
int a;
    int b=0;
    int l;
    int y=2;
    cout<<"Ingrese que numero primo quiere"<<endl;
    cin>>l;
    while(l!=b){
            a=0;
            y=y+1;
            for(int z=2;z<1000;z+=1){
                if(y%z==0){
                    a=a+1;
                    }
            }
        if(a<2){
            b=b+1;}
        if(a<2&l==b){
            cout<<"Primo "<<b<<" : "<<y<<endl;

        }

    }
    return 0;

}