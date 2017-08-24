#include <iostream>
using namespace std;
int main(){
   int num, m=2;
   bool band = true;
    cout<<"Ingrese numero: "<<endl;
         cin>>num;
         while(band&&m<num){
         if(num%m==0){
             band=false;
            }
        else{
            m=m+1;
        }
         }
         if(band){
              cout<<"No es Primo";
            }
            else{
                cout<<"Si es Primo";
         }
    return 0;
}
