#include<iostream>
using namespace std;
int main()
{
    int n,a[200000],l=0;
    long long s1,s2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int si=0,sj=n-1;
    s1=a[0];
    s2=a[n-1];
    while(si<sj)
    {
        if(s1==s2)
        {
            l=(si+1)+(n-sj);
            si++;
            s1+=a[si];
            continue;
        }
        if(s1<s2)
        {
            si++;
            s1+=a[si];
            continue;
        }
        if(s1>s2)
        {
            sj--;
            s2+=a[sj];
        }
    }
    cout<<l;
    return 0;
}
