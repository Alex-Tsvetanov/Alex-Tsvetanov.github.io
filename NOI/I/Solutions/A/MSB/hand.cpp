#include <iostream>
#include <vector>
using namespace std;
long int a[200000];
bool used[200000];
vector <int> b;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int br = 0, ind = 0;
    for(int i=0; i<n; i++)
    {

        if(a[i]==0)
        {
            br++;
            ind=i+1;
            b.push_back(a[i]);
        }

        if(a[i]>0)
        {
            int j=0;
            while(b.size()>j)
            {
                b[j]++;
                j++;
            }
            b.push_back(a[i]);
        }

    }
    int maxn=b[0];
    for(int i=0; i<n; i++)
    {
        if(maxn<b[i]) maxn=b[i];
    }

    cout<<maxn<<endl;

    int s=0,k=0;
    while((ind + k)< n)
    {
        int p=a[ind + k];
        if(a[ind+k]>=br and !used[p])
        {
            s++;
            used[p]=true;
        }
        k++;
    }
    cout<<s<<endl;
    return 0;
}
