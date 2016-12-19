#include <iostream>
using namespace std;
int main(){
  char s,v;
  long long a,b,n,m,k;
  cin>>n>>s>>m>>v>>k;
  if(s=='A' and v=='B'){
    a=n;
    b=m;
    if(a-k<=0){
      cout<<a;
    }
    else{
      cout<<a-(a-k);
    }
  }
  if(s=='B' and v=='A'){
    a=m;
    b=n;
    if(k<=b){
      cout<<"0";
    }
    else{
      cout<<a-(a-(k-b));
    }
  }
  return 0;
}
