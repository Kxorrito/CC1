#include <iostream>

using namespace std;
void copy(char *s,char *t){
//    int i=0;
//    while(s[i]!='\0'){
//        t[i]=s[i];
//        i++;
//    }
//    t[i]='\0';
while ((*s++=*t++)!='\0'){
}

}
int main()
{
    char s[]="cien";
    char t[10];
    int i=0;
    copy(s,t);
//    while(s[i]!='\0'){
//        cout<<t[i];
//        i++;
//    }
    cout<<t;
    return 0;

}





