#include<iostream>
using namespace std;
int main(){
long long n,n2,k;
char A,B;
cin>>n>>A>>n2>>B>>k;
if(B!='A'){
if(n>k){
cout<<k;
}
if(n<k){
cout<<n;
}
}
if(n>k){
cout<<"0";
return 0;
}
if(A='B'){
cout<<k-n;
}

return 0;
}
