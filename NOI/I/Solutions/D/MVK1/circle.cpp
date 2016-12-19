#include<iostream>
using namespace std;
int main(){
long long broiKragove, chisloZaVuvejdane, chisloZaVuvejdane2,sbor;
char chislo, znak;
cin>>chisloZaVuvejdane>>chisloZaVuvejdane2;
cin>>znak;
if(znak=='+'){
    sbor=chisloZaVuvejdane+chisloZaVuvejdane2;
}
if(znak=='-'){
    sbor=chisloZaVuvejdane-chisloZaVuvejdane2;
}
if(znak=='*'){
    sbor=chisloZaVuvejdane*chisloZaVuvejdane2;
}
if(chislo==8){
    broiKragove=2;
}
if(chislo==0){
    broiKragove=1;
}
if(chislo==6){
    broiKragove=1;
}
if(chislo==9){
    broiKragove=1;
}
chislo=sbor;
cout<<sbor;

return 0;
}
