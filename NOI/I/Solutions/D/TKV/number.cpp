#include <iostream>
using namespace std;
int main() {
long long m,n,i,y,z,br=0;
cin>>m>>n;
for(i=m;i>=m && i<=n;i++){
    for(y=1,z=2;z<=100000;y++,z++){
        if(y*z==i){br++;}}
    }
cout<<br;
return 0;
}
