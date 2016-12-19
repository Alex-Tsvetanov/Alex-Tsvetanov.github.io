#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int max=0;
    int n;
    cin>>n;
    int arr[n];
    for(int y=0; y<n; y++)
    {
        cin>>arr[y];
    }
    unsigned long long s1=0;
    for(int i=0; i<n; i++)
    {
        s1=s1+arr[i];
        unsigned long long s2=0;
        for(int u=i+1; u<n; u++)
        {
            s2=s2+arr[u];
        }
        if(s1==s2)
        {
            if(i+1+n-1>max)max=i+1+n-1;
        }
        for(int j=i+1; j<n; j++)
        {
            s2=s2-arr[j];
            if(s1==s2)
            {
                if(i+1+n-1-j)max=i+n-j;
            }
        }
    }
    cout<<max;
    return 0;
}
