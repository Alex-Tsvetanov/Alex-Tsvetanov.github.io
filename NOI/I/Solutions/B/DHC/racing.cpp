#include<iostream>
using namespace std;
int n, a[1000];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=3; i<n; i++)
    {
        a[i]=a[i]+min(a[i-1], min(a[i-2], a[i-3]));
    }
    cout<<min(a[n-1], min(a[n-2], a[n-3]))<<endl;
    return 0;
}
