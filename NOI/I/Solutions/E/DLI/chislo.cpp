#include<iostream>
using namespace std;
int main()
{
    long long a,b,chislo;
    cin>>a>>b;
    if(a==6) a=9;
    else if(a==9) a=6;
    if(b==6) b=9;
    else if(b==9) b=6;
    if(a>=b) chislo=a*10+b;
    if(b>=a) chislo=b*10+a;
    cout<<chislo<<endl;
    return 0;
}
