#include<iostream>
using namespace std;
int main (){
long long n1,n2,k;
char b1,b2;
cin>>n1>>b1>>n2>>b2>>k;
if(n1>=1 && n1<=100 && n2>=1 && n2<=100 && n2+n1>=k){
    if(b1=='A'){
        if(n1>=k){
            cout<<k;
        }else
        if(k>=n1){
            cout<<n1;
        }
    }else
    if(b2=='A'){
        if(n2>=k){
            cout<<0;
        }else
        if(k>=n2){
            cout<<k-n2+1;
        }
    }
}
return 0;
}
