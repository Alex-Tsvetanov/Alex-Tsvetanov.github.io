#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long a,b,n,br;
pair<int,int>res[10000];
int main()
{
    cin>>n;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(((i+n/i)%2)==0)
            {
                a=(i+n/i)/2;
                b=a-i;
                res[br].first=a*a;
                res[br].second=b*b;
                br++;
            }
        }
    }
    for(int i=0;i<br-1;i++)
        for(int j=i;j<br-1;j++)
        {
            if(res[j]>res[j+1])
                swap(res[j],res[j+1]);
        }
    cout<<br<<endl;
    for(int i=0; i<br; i++)
        cout<<res[i].first<<" "<<res[i].second<<endl;
    return 0;
}
