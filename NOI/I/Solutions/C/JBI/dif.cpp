#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
struct res
{
    long long a,b;
};
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector<res>izhod;
    long long s,a,b;
    cin>>s;
    res k;
    for(long long i=1;i<=sqrt(s);i++)
    {
        if(s%i==0)
        {
            int j=s/i;
            if((j-i)%2==0)
            {
                k.a=(i+j)/2;
                k.b=(j-i)/2;
                izhod.push_back(k);
            }

        }
    }
    cout<<izhod.size()<<endl;
    for(int i=izhod.size()-1;i>=0;i--)
    {
        cout<<izhod[i].a*izhod[i].a<<" "<<izhod[i].b*izhod[i].b<<endl;
    }
    return 0;
}
///sqrt(n);
