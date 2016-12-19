#include<iostream>
#include<algorithm>
using namespace std;
pair<long long,long long> mnoj[1000000],ans[1000000];
long long ansize=0;
int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    long long n;
    cin>>n;
    for(long long i=0; i<n; i++)
    {
        cin>>mnoj[i].first>>mnoj[i].second;
    }
    sort(mnoj,mnoj+n);
    long long beg=0,kra=0;
    for(long long i=0; i<n; i++)
    {
        if(mnoj[i].first>kra+1 and kra!=0)
        {
            ans[ansize].first=beg;
            ans[ansize].second=kra;
            ansize++;
            beg=mnoj[i].first;
            kra=mnoj[i].second;
        }
        else
        {
            if(beg==0)
            {
                beg=mnoj[i].first;
            }
            kra=max(kra,mnoj[i].second);
        }
    }
    ans[ansize].first=beg;
    ans[ansize].second=kra;
    ansize++;
    cout<<ansize<<endl;
    for(long long i=0; i<ansize; i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}
