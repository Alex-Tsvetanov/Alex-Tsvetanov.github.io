#include<iostream>
using namespace std;
int main()
{
    int a,b,h,k,l,g,m;
    char v;
    cin>>a>>b>>v;
    g=0;
    if(v=='+'){
        m=a+b;
    }
    if(v=='-'){
        m=a-b;
    }
    if(v=='*'){
        m=a*b;
    }
    h=m-(m%10);
    k=(m-h);
    l=(m-k)/10;
    if(l==0){
        g=g+1;
    }
    if(l==9){
        g=g+1;
    }
    if(l==6){
        g=g+1;
    }

    if(l==8){
        g=g+2;
    }
    if(k==0){
       g=g+1;
    }
    if(k==9){
        g=g+1;
    }
    if(k==6){
        g=g+1;
    }
    if(k==8){
        g=g+2;
    }

    cout<<g;
    return 0;
}
