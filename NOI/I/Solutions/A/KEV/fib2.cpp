#include <iostream>
#include <cstring>
using namespace std;
int nax(int a,int b)
{
    int s=1;
    for(int i=0;i<b;i++)
    {
        s=s*a;
    }
    return s;
}
int broj(int a)
{
    int br=0;
    while(a!=0)
    {
        br++;
        a=a/10;
    }
    return br;
}
int into10(int a,int q,int p)
{
    int c[q];
    int s=0;
    int r;
    for(int i=0;i<q;i++)
    {
        r=nax(10,i);
        c[i]=(a/r)%10;
        s=s+c[i]*nax(p,i);
    }
    return s;
}
int toP(int a,int p)
{
    int b=0;
    int s=0;
    int j;
    while(a!=0)
    {
        j=(a%p)*nax(10,b);
        s=s+j;
        a=a/p;
        b++;
    }
    return s;
}
int main()
{
    int p,n;
    cin>>p>>n;
    long int a[n];
    cin>>a[0]>>a[1];
    if(p==10)
    {
        for(int i=2;i<n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        cout<<(a[n-1]%100)/10;
    }
    if(p<10)
    {
        int b[n];
        int q,r;
        q=broj(a[0]);
        r=broj(a[1]);
        b[0]=into10(a[0],q,p);
        b[1]=into10(a[1],r,p);
        for(int i=2;i<n;i++)
        {
            b[i]=b[i-1]+b[i-2];
        }
        cout<<(toP(b[n-1],p)%100)/10;
    }
}
