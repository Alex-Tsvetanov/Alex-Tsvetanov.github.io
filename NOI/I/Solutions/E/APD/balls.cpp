#include <iostream>
using namespace std;
int main ()
{
    long long e,f,k;
    char c,d;
    cin>>e>>c>>f>>d>>k;
    if (e>=1 and e<=100  and  f>=1 and f<=100  and  k<=e+f)
    {
        if(c=='A' and k<=e)
        {
            cout<<k<<endl;
        }
        else if(c=='A' and k>=e)
        {
            cout<<e<<endl;
        }
        else if(c=='B' and k<=e)
        {
            cout<<0<<endl;
        }
        else if(c=='B' and k>=e and (k-e)<=f)
        {
            cout<<k-e<<endl;
        }
        else if (c=='B' and k>=e)
        {
            cout<<f<<endl;
        }
    }
    return 0;
}
