#include<iostream>
using namespace std;
int main(){
long long x,y,z,m,n,broi=0,index;
y<x;
z<x;
m<n;
cin>>m>>n;
for(x=m;x<=n;x++){
    for(z=m+1;z<=n;z++){
        for(y=m;y<=n-1;y++){
            if(x==y*z && z==y+1){
                broi=broi+1;
            }
        }
    }
}
cout<<broi;

return 0;
}
