#include <iostream>
using namespace std;

int main ()
{
    int n, a[10000], br=3, k=0, min_3=100000;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    if(n>3)
    {
    for(int i=1;i<=n;i++)
    {
        if(n>br)
        {
            k+=a[br];
            br+=3;
        }
    }

    cout << k;
    }
    else
    {
        if(a[1]<=a[2] and a[1]<=a[3])
                min_3=a[1];
        else if(a[2]<=a[1] and a[2]<=a[3])
                min_3=a[2];
        else if(a[3]<=a[2] and a[3]<=a[1])
                min_3=a[3];
    cout << min_3;
    }

    return 0;
}
