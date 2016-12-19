#include <iostream>
using namespace std;

int main()
{
    long long M,N,a,zdr,zdr2,ryk;
    cin>>N >>M;
    a = M;
    M = 0;
    zdr = 0;
    while(M < a)
    {
        zdr = zdr + M;
        M++;
    }//¬€рно е
    zdr = zdr*2;
    M = a;
    ryk = 0;
    a = N;
    N = 0;
    zdr2 = 0;
    while(N < a)
    {
        ryk = ryk + N;
        zdr2 = zdr2 + N + M;
        N++;
    }
    zdr2 = zdr2*2;
    zdr = zdr + zdr2;
    cout<<ryk<<" "<<zdr;
    return 0;
}
