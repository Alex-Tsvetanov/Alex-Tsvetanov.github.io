#include <iostream>
using namespace std;
int main ()
{
    char a,b,e,f;
    long long c,d,g,h,t,m,l,r;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    if (a>='A' and a<='Z')
    {
        t=2*(a-64);
    }
    else if (a>='a' and a<='z')
    {
        t=a-96;
    }
    if (b>='A' and b<='Z')
    {
        m=2*(b-64);
    }
    else if (b>='a' and b<='z')
    {
        m=b-96;
    }


    if (e>='A' and e<='Z')
    {
        l=2*(e-64);
    }
    else if (e>='a' and e<='z')
    {
        l=e-96;
    }
    if (f>='A' and f<='Z')
    {
        r=2*(f-64);
    }
    else if (f>='a' and f<='z')
    {
        r=f-96;
    }

    if ((t+m+c+d) > (r+l+g+h))
    {
        cout<<a<<b<<c<<d<<" "<<t+m+c+d<<endl;
    }
    else if ((t+m+c+d) < (r+l+g+h))
    {
        cout<<e<<f<<g<<h<<" "<<r+l+g+h<<endl;
    }
        if ((t+m+c+d) == (r+l+g+h))
    {
        cout<<0<<endl;
    }
    return 0;
}
