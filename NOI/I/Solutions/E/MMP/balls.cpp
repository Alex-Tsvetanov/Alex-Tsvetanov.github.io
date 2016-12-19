#include<iostream>
using namespace std;
int main(){
long long x,y,k;
char a,b;
cin>>x>>a;
cin>>y>>b;
cin>>k;
if(a!='A' and y+x==k){
    cout<<y;
}else{
if(a!='A' and y+x>k and k>x){
   cout<<k-x;

}else{
if(a!='A' and x>=k){
    cout<<"0";
}else{
if(a='A' and x<=k){
    cout<<x;
}else{
if(a='A' and x>k){
    cout<<k;
}
}
}
}
}
return 0;
}
