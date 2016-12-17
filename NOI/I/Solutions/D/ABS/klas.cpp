#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    a=n-1;
    b=m*(m-1)+(n*m)*2;
    if(n==0){
        a=0;
    }
    if(m==0){
        b=0;
    }
    cout<<a<<" "<<b;
    return 0;
}
