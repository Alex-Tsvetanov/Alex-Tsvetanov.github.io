#include<iostream>
using namespace std;
int main()
{
    int m,n,r=0,z=0;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
            if(i!=1){
                r=r+i;
            }
        }
    for(int p=0;p<=m+n;p++){
         if(p!=1){
            z=z+p;
         }
    }
    cout<<r<<" "<<z-r-2*m;
    return 0;
}
