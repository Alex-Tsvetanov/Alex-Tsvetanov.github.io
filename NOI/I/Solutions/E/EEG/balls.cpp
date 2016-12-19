#include<iostream>
using namespace std;
int main(){
long long topcetaA,topcetaB,k,akoTopchetataASaPovece,akoTopchetataASaPoMalko;
char a,b;
a=topcetaA;
b=topcetaB;
cin>>topcetaA;
cout<<" ";
cin>>a;
cout<<endl;
cin>>topcetaB;
cout<<" ";
cin>>b;
cout<<endl;
cin>>k;
if(k>=topcetaA){
if(k=topcetaA){
cout<<topcetaA;
}
if(k>topcetaA){
        akoTopchetataASaPovece=k-(k-topcetaA);
}
}
if(k<topcetaA){
akoTopchetataASaPoMalko=topcetaA-k;
}
cout<<topcetaA<<endl;
return 0;
}
