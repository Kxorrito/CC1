#include <iostream>

using namespace std;
int inversion(int arr[],const int z){
        for(int i=z;i>=0;i--){
            cout<<arr[i];
        }
}

int main()
{
    int arreglo[]={1,2,3,4,5};
    inversion(arreglo,4);


}