#include<iostream>
using namespace std;
int s,n,a[1000];
void f(int i,int l,int d1,int d2)
{
    if(i>=n)
    {
        if(l<s or s==-1) s=l;
        return;
    }
    if(i+3>=n)
    {
        l+=a[i];
        if(l<s or s==-1) s=l;
        return;
    }
    if(l>s and s!=-1) return;
    if(!(d1==2 or (d1==1 and d2==1))) f(i+1,l+a[i],1,d1);
    if(d1!=1) f(i+2,l+a[i],2,d1);
    f(i+3,l+a[i],3,d1);
}
int main()
{
    s=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<a[0];
        return 0;
    }
    if(n==2)
    {
        cout<<min(a[0],a[1]);
        return 0;
    }
    f(0,0,0,0);
    f(1,0,0,0);
    f(2,0,0,0);
    cout<<s;
    return 0;
}
