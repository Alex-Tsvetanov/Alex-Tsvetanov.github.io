#include <iostream>
using namespace std;
int main(){
long long n,m,ryk=0,zdr=0,i,k;
cin>>n;
cin>>m;
ryk=n*(n-1)/2;
cout<<ryk;
for(i=0,k=0;i<m+n;i++,k=k+2){
    zdr=zdr+k;
}
cout<<" "<<zdr;
return 0;
}
