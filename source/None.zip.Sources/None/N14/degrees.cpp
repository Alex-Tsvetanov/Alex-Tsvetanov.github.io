#include <iostream>
using namespace std;
long long step(int a, int b)
{
    long long  st=1;
    for(int i=0; i<b-1; i++)
    {
        st=st*a;
    }
    return st;
}
int main()
{
    long long a;
    cin>>a;
    int i=0;
    long long d=0,m=2,k=a;
    while (k>0)
    {
        d++;
        k/=10;
    }
ab:;
    for(; d>0; i++)
    {
        if(m==a/ step(10,d))
        {
            a=a-(m*step(10,d));
            d--;
        }
        else
        {
            d--;
            goto ab;
        }
        m=m*2;

    }
    cout<<i;
    return 3;
}
