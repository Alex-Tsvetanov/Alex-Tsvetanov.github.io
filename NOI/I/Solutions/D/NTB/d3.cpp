#include <iostream>
using namespace std;
int main(){
long long a,b,c=0,k,cfr, brcfr,brcfrx,z,brc=0;
char znak;
cin>>a;
cin>>b;
cin>>znak;
if(znak=='+'){
    k=a+b;
}
if(znak=='-'){
    k=a-b;
}if(znak=='*'){
    k=a*b;
}
for(brcfrx=1,brcfr=1;k/brcfrx>=10;brcfrx=brcfrx*10,brcfr++){

}
//cout<<brcfr;
for(cfr=0,z=1;z<=brcfrx;z=z*10){
        cfr=(k%(z*10))/z;
    if(cfr==0 || cfr==6 || cfr==9){
        brc=brc+1;

    }
    if(cfr==8){
        brc=brc+2;
    }
}
cout<<brc;
return 0;
}
