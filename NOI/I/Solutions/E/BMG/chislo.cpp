#include<iostream>
using namespace std;
int main(){
long long a,b,k,w,p,z;
cin>>a>>b;
if(a==1){
k=1;
}
if(a==6){
k=9;
}
if(a==8){
k=8;
}
if(a==9){
k=6;
}
if(b==1){
w=1;
}
if(b==6){
w=9;
}
if(b==8){
w=8;
}
if(b==9){
w=6;
}
p=10*k+w;
z=10*w+k;
int mx=max(p,z);
cout<<mx;
return 0;
}
