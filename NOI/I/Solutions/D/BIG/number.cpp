#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long m,n,iMin,iMax,br=0;
    cin>>m>>n;
    iMin=sqrt(m);
    while(iMin*(iMin+1)<m){
        iMin++;
    }
    iMax=sqrt(n);
    while(iMax*(iMax+1)>n){
        iMax--;
    }
    iMax++;
    br=iMax-iMin;
    cout<<br<<endl;
return 0;
}
