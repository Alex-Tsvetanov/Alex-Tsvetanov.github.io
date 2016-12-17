#include<iostream>
using namespace std;
int main()
{
    int y,x,z=0,m,n;
    cin>>m>>n;
        for(x=0;x<=n;x++){
            y=x++;
            if(x*y<=n&&x*y>=m){
                z++;
            }
        }
    cout<<z;
    return 0;
}
