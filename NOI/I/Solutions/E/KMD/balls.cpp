#include <iostream>
using namespace std;
int main(){
long long n1,n2,vseti,vsetiA;
char char1,char2;
cin>>n1>>char1>>n2>>char2>>vseti;
if(char1=='A'){
    if(n1<=vseti){
        vsetiA=n1;
    }else{
        vsetiA=vseti;
    }
}
if(char1=='B'){
    if(n1<vseti){
        vsetiA=vseti-n1;
    }else{
        vsetiA=0;
    }
    if(n1==vseti){
       vsetiA=0;
    }
}
cout<<vsetiA<<endl;
return 0;
}
