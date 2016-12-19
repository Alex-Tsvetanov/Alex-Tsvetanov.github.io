#include<iostream>
using namespace std;
int main(){
long long a,b,ngChislo,ng;
cin>>a>>b;
if(a>b){
    if(a==6){
    a=9;
    }
    if(b==6){
        b=9;
    }
    ngChislo=a*10+b;
}else{
    if(b==6){
        b=9;
    }
     if(a==6){
    a=9;
    }
    ngChislo=b*10+a;}
cout<<ngChislo;
return 0;
}
