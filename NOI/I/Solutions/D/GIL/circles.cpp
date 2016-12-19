#include <iostream>
using namespace std;

int main()
{
    long long a,b,sum,broi,k[10],nul,n,m[10],p;
    char c;
    p = -1;
    n = 0;
    nul = 1000000000;
    for(int i = 0;i < 10;i++)
    {
        m[i] = nul;
        k[i] = nul;
        nul = nul/10;
    }
    broi = 0;
    cin>>a;
    cin>>b;
    cin>>c;
    if(c=='+')
    {
        sum = a+b;
    }
    if(c=='-')
    {
        sum = a-b;
    }
    if(c=='*')
    {
        sum = a*b;
    }
    while(sum>0)
    {
        while(sum>=k[n])
        {
            if(p < 0){
                p = 0;
            }
            sum = sum - k[n];
            p = p + 1;
        }
        n++;
        if(p == 0 || p == 6 || p == 9){
            broi++;
        }
        if(p == 8){
            broi = broi + 2;
        }
        p = -1;

    }
    cout<<broi;
    return 0;
}
