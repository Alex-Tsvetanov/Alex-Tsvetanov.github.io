#include<iostream>
using namespace std;
int main(){
long long a,b;
cin>>a>>b;
if(a==1){
    a=1;
}
if(a==6){
    a=9;
}else{
    if(a==9){
    a=6;
    }
}
if(a==8){
    a=8;
}
if(b==1){
    b=1;
}
if(b==6){
    b=9;
}else{
    if(b==9){
    b=6;
    }
}
if(b==8){
    b=8;
}
if(b>a){
    cout<<b;
    cout<<a;
}
if(b<a){
    cout<<a;
    cout<<b;
}
if(b==a){
    cout<<b<<a;
}
return 0;
}
