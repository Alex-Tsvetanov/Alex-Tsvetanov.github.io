#include<iostream>
using namespace std;
int main(){

long long subirano,turseno, namereno;


cin>>turseno>>namereno;
if(namereno=9){
  namereno=6;

}

if(namereno=6){
     namereno=9;
}
subirano=namereno;
namereno=turseno;
turseno=subirano;
cout<<turseno<<namereno;
return 0;
}
