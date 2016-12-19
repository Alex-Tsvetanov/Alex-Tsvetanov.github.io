#include<iostream>
using namespace std;
int main(){
long long k,a,b;
char b1,b2;
cin>>a>>b1>>b>>b2;
cin>>k;
if(b1=='A'){
    if(k>a){
        cout<<a;
    }
    if(k<a){
        cout<<k;
    }
}
if(b1=='B'){
    if(k>b){
        cout<<k-b+1;
    }
    if(k<b){
        cout<<"0";
    }
}
return 0;
}
