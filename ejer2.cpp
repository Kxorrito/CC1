#include <iostream>

using namespace std;

int sum(const int arr[],const int z){
    int res=0;
    if(z<0){
        return 0;
    }
    else{
        res=res + arr[z];
        sum(arr,z-1);
        cout<<res<<":::";
    }
    return res;
}

int main(){
    int mat[]={1,2,3,4,5};
    int z=4;
    cout<<"la suma es:"<<sum(mat,z);

}
