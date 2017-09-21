#include <iostream>

using namespace std;
/*void swap(int&a,int&b){
    int temp=a;
    a=b;
    b=temp;

}*/
/*int main()
{
   int x=2;
   int y=3;
   swap(x,y);
   cout<<x<<" "<<endl;
   return 0;
}*/

/*int main (){
    char x='a';
    char *p_x=&x;
    cout<<*p_x<<endl;
    cout<<p_x<<endl;
}*/

/*int main(){
    int a[4]={11,12,13,14};
    int x,y;
    int *pa;
    pa=&a[0];
    x=*pa;
    y=*(pa+2);
    y=y+3;
    cout<<("%d %d %d %d", *pa,x,y,a[2]);

}*/



/*int main(){
    int sum[]={11,12,13,14};
    int *pa=&sum[0];
    int res=0;
    for(int a=0;a<4;a++){
        *pa=sum[a];
        res=res+*pa;
    }
    cout<<res;

}*/

/*int suma(int arr [],int a){
    int *pa=&arr[0];
    int res=0;
    for(int a=0;a<4;a++){
        *pa=arr[a];
        res=res+*pa;
    }
    return res;
}

int main(){
    int sum[]={11,12,13,14};
    cout<<suma(sum,5);
}*/


int suma(int *arr,int tam){
    int res=0;
    for(int a=0;a<tam;a++){
        res=res+*(arr+a);
    }
    return res;
}

int len(char *s){
    char*p=s;
    while(*p!='\0'){
        p++;
    }
    return p-s;
}

int main(){
    //int sum[]={11,12,13,14};
    //cout<<suma(sum,5);
    char a[]="hola";
    cout<<len(a);
}



