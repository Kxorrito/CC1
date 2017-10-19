#include "complejo.h"

complejo::complejo(){
    x=0;
    z=0;
}
complejo::complejo(int a, int b){
    x=a;
    z=b;
}
complejo complejo::sum(complejo a){
    x=x+a.x;
    z=z+a.z;
}
bool complejo::igual(complejo a){
    if ((a.x==x)&&(a.z==z)){
        return true;
    }
    return false;
}
void complejo::multi(int i){
    x=x*i;
    z=z*i;
}
void complejo::print(){
    cout<<x<<endl;
    cout<<z<<endl;
}
