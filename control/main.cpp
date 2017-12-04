#include <iostream>

using namespace std;


int main(){
    int matriz[4][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if(i==0&&j<5){
                cout<<matriz[i][j];
            }
            if(i>=0&&j==5){
                cout<<matriz[i][j];
            }
        }
    }
    for(int i=3;i>=0;i--){
        for(int j=5;j>=0;j--){
            if(i==3&&j<5&&j>0){
                cout<<matriz[i][j];
            }
            if(i<=3&&i>0&&j==0){
                cout<<matriz[i][j];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if(i==1&&j>0&&j<5){
                cout<<matriz[i][j];
            }
        }
    }
    for(int i=3;i>=0;i--){
        for(int j=5;j>=0;j--){
            if(i==2&&j<5&&j>0){
                cout<<matriz[i][j];
            }
        }
    }
}


int invertir(int arr[],const int n){
        for(int i=n;i>=0;i--){
            cout<<arr[i];
        }
}

int main()
{
    int areglo[]={1,2,3,4,5};
    invertir(areglo,4);


}

int suma(const int lista[],int tam){
    int r = 0;
    if((tam-1)==0){
        r += lista[0];
    }
    else
        r = lista[tam-1] + suma(lista,tam-1);
    return r;
}

int main()
{
    int matriz[]={1,2,3,4,5},tam=5;
    cout<<suma(matriz,5);
    return 0;
}
