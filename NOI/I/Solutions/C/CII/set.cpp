#include<iostream>
#include<algorithm>
using namespace std;
pair<long long,long long>digs[20000];
long long n,a,b,k,sets[10000][2],j;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        digs[k].first=a;
        digs[k].second=b;
        k++;
        digs[k].first=b;
        digs[k].second=a;
        k++;
    }
    digs[k].first=1000000001;
    digs[k].second=1000000001;
    k++;
    sort(digs,digs+k);
    for(int i=0;i<k;i++)
    {
        if(digs[i].second>digs[i].first)
        {
            int temp=digs[i].second,max1=0;
            sets[j][0]=digs[i].first;
            while(digs[i].first<=temp)
            {
                if(digs[i].second>max1)max1=digs[i].second;
                i++;
            }
            sets[j][1]=max1;
            j++;
            i--;
        }
    }
    cout<<j<<endl;
    for(int i=0;i<j;i++)
        cout<<sets[i][0]<<" "<<sets[i][1]<<endl;
    return 0;
}
/**
5
2 7
2 4
9 12
15 20
10 12

3
7 20
5 11
20 22
*/
