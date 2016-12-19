#include<iostream>
using namespace std;
int main(){
long long a,b;
cin>>a>>b;
if(a!=6 and b!=6 and a>=b){
    cout<<a<<b;
}else{
if(a!=6 and b!=6 and b>=a){
    cout<<b<<a;
}else{
if(a!=6 and b==6){
b=9;
    cout<<b<<a;
}else{
if(a==6 and b!=6){
a=9;
    cout<<a<<b;
}else{
if(a==6 and b==6){
b=9;
a=9;
    cout<<a<<b;
}
}
}
}
}
return 0;
}
