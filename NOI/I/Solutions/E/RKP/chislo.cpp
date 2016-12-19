#include<iostream>
using namespace std;
int main(){
long long a,b,c,d,e,f;
cin>>a>>b;
if(a==6){
         e=9;
}
if(a==9){
         e=6;
}
if(a==1){
         e=1;
}
if(a==8){
         e=8;
}
if(b==6){
         f=9;
}
if(b==9){
         f=6;
}
if(b==1){
         f=1;
}
if(b==8){
         f=8;
}
c=a*10+b;
d=b*10+a;
if(e==f){
         cout<<e*10+f;
}
if(e>f){
         cout<<e*10+f;
}else{
         cout<<f*10+e;
}
return 0;
}
