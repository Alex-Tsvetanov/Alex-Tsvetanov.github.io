#include <iostream>
using namespace std;
int main ()
{
    short a[200009];
    long long sum1=0,sum2=0,n;
    cin>>n;
    for(long long i=1;i<=n;i++)cin>>a[i];
    sum2=a[n];
    long long i=0,j=1,maxbr=0;
    bool flag=false;
    while(i+j<=n)
    {
        i++;
        sum1+=a[i];
        while(sum1>sum2){j++; sum2+=a[n+1-j];}
        if(sum1==sum2&&i+j<=n)maxbr=i+j;
    }
    cout<<maxbr<<endl;
    return 0;
}
