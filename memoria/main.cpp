#include <iostream>

using namespace std;
/*
class integer{
public:
    int val;
    integer(int v){
        val=v ; cout<<"constructor with arg "<<v<<endl;
        }
};

int main()
{
    integer i(3);
    integer j = 5;
}
*/

/*
class integer {
public:
    int val;
    integer(int v=0){
        val=v;
    }
};

int main(){
    integer i;
    integer j(3);
}
*/

/*
class integer {
public:
    int val;
    integer(int val =0){
        this->val=val;
    }
    void setVal(int val){
        this->val=val;
    }
};
*/

/*
int main (){
    int *p;
    if(true){
        int x=5;
        p=&x;
    }
    cout<<*p<<endl;
}
*/

/*
int *getptrtofive(){
    int *x=new int;
    *x=5;
    return x;
}
 int main(){
    int *p;
    for (int i=0; i<3;++i){
        p= getptrtofive();
        cout<<*p<<endl;
    }
 }
*/

/*
int main(){
    int numItems;
    cout<<"how many items? ";
    cin >> numItems;
    int *arr= new int(numItems);
    for (int i=0; i< numItems; ++i){
        cout<<"enter item"<<i<<": ";
        cin>>arr[i];

    }
    for(int i=0; i<numItems; ++i){
        cout<<arr[i]<<endl;
    }
    delete[]arr;
}
*/

/*
class Point {
public:
    int x,y;
    Point(){
        cout<<"constructor invoked"<<endl;
    }
    ~Point(){
        cout<<"destructor invoked"<<endl;

    }
};

int main(){
    if(true){
        Point p;
    }
    cout<<"p out of scope"<<endl;
}
*/


/*
class integerArray{
public:
    int *data;
    int size;
    integerArray(int size){
        data=new int[size];
        this->size=size;
    }
    ~integerArray(){
        delete[]data;
    }
};

int main(){
    integerArray arr(2);
    arr.data[0]=4; arr.data[4]=5;
}
*/

class integerArray{
public:
    int *data;
    int size;
    integerArray(int size){
        data=new int[size];
        this->size=size;
    }
    ~integerArray(){
        delete[]data;
    }
};

int main(){
     integerArray a(2);
     a.data[0]=4, a.data[1]=2;
     if (true) {
        integerArray b=a;
     }
     cout<<a.data[0]<<endl;
}


