#include <iostream>
using namespace std;
int main(){

long long n, m, o, r=0, z, p=0, i;
cin>>n>>m;
o=m+n;

for(i=0;i<o;i++){p=p+i;}
for(i=0;i<n;i++){r=r+i;}

z=(p-r)*2;
cout<<r<<" "<<z<<endl<<endl;

return 0;
}
