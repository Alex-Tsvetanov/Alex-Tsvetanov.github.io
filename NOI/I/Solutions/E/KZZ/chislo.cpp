#include<iostream>
using namespace std;
int main (){
long long a,b;
cin>>a>>b;
if(a==1 || a==8){
    a=a;
}else
if(a==6){
    a=a+3;
}else
if(a==9){
    a=a-3;
}
if(b==1 || b==8){
    b=b;
}else
if(b==6){
    b=b+3;
}else
if(b==9){
    b=b-3;
}
if(a>=b){
    cout<<a<<b;
}else{
    cout<<b<<a;
}
return 0;
}
