#include <iostream>
using namespace std;

int main(){
long long m,n,i,br=0,x=0,y=0,z=0;
cin>>n>>m;
for(i=0;n<=m;n++,y++){
      z=y+1;
x=z*y;
    if(x==m){
       br++;
       }
    if(x==n){
       br++;
       }
}
cout<<br;
return 0;
}
