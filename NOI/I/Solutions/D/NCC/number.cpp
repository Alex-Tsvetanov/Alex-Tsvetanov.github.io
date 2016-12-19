#include <iostream>
using namespace std;
int main(){

long long m, n, a=1, b=2, i=0;
cin>>m>>n;

while(a*b<=n){
    if(a*b>=m){i++;}
    a++;b++;
}

cout<<i<<endl<<endl;

return 0;
}
