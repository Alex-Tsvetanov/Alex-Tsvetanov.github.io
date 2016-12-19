#include <iostream>
using namespace std;
int main(){
  long long a,b,chisloto;
  cin>>a>>b;
  if(a==6){
    a=9;
  }
    if(b==6){
    b=9;
  }
  if(a>b){
   chisloto=10*a+b;
  }
else  if(b>a){
    chisloto=10*b+a;
  }
else  if(a==b){
    chisloto=10*a+b;
  }
  cout<< chisloto;
return 0;
}
