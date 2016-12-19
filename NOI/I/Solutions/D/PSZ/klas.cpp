#include<iostream>
using namespace std;
int main(){
    long long n , m , zdr=0 , r=0 , bns , bms;
    cin>>n>>m;
    for(bns=0 ; bns<n ; bns=bns+1){
        r=r+bns;
    }
    for(bms=0 ; bms<m ; bms=bms+1){
        zdr=zdr+(bms+n)*2;
    }
    cout<<r<<" "<<zdr;
return 0;
}
