#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    double x[102],y[102],x1[102],y1[102];
    double cos[102];
    double dx[102],dy[102],dz[102];
    int br=0;
    int min_cos=0;
    for (int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i]>>x1[i]>>y1[i];
    }
    for (int i=0; i<n; i++)
    {
        dx[i]=x1[i]-x[i];
        dy[i]=y1[i]-y[i];
        dz[i]=sqrt(dx[i]*dx[i]+dy[i]*dy[i]);
        cos[i]=dx[i]/dz[i];
        if (x[i]<x1[i] && y[i]>y1[i]) cos[i]=cos[i]*(-1);
    }
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (cos[j]>cos[j+1]) swap(cos[j],cos[j+1]);
        }
    }

    for (int i=0; i<n; i++)
    {
        if (cos[i]>min_cos)
        {
            br++;
            min_cos=cos[i];
        }
    }
    cout<<br<<endl;
    return 0;
}
