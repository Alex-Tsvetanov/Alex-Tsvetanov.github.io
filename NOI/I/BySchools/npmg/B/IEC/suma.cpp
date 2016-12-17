#include <iostream>
using namespace std;

int main ()
{
    int n, s1=0, s2=0, a[10000], k;
    double k1;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    if(n%2==0)
    {
        k=n/2;

    for(int i=1;i<=k;i++)
    {
        s1++;
    }

    for(int j=k+1;j<=n;j++)
    {
        s2++;
    }
    }
    cout << s1+s2;

    if (n%2!=0)
    {
        k1=(n/2)+0,5;
    }
    cout << k1;

    return 0;
}
