#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    long long n,a[1010];
    cin>>n;
    for(long long i=1;i<=n;i++)cin>>a[i];
    long long bez[1010],edin[1010],dva[1010];
    for(long long i=1;i<=n;i++)
    {
        bez[i]=0;
        edin[i]=0;
        dva[i]=0;
    }
    bez[1]=a[1];
    edin[1]=0;
    dva[1]=0;
    bez[2]=a[2];
    edin[2]=bez[1];
    dva[2]=0;
    for(long long i=3;i<=n;i++)
    {
        long long mini=bez[i-1];
        if(edin[i-1]<mini)mini=edin[i-1];
        if(dva[i-1]<mini)mini=dva[i-1];
        bez[i]=mini+a[i];
        edin[i]=bez[i-1];
        dva[i]=edin[i-1];
    }
    long long mini=bez[n];
    if(edin[n]<mini)mini=edin[n];
    if(dva[n]<mini)mini=dva[n];

    if(n==2&&a[1]>a[2])cout<<a[2]<<endl;
    else
    if(n==2)cout<<a[1]<<endl;

    if(n==1)cout<<a[1]<<endl;

    if(n>=3)cout<<mini<<endl;
    return 0;
}
