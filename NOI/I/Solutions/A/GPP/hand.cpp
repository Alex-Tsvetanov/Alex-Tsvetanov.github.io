#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int a[n];
    int pr[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int br=0;
    for(int i=0;i<n;i++)
    {
        br = a[i];
        for(int j = i+1;j<n;j++)
        {
            if(a[j]>0)
            {
                br++;
            }
        }
        //cout<<i<<" "<<br<<endl;
        pr[i] = br;

    }
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        if(pr[i]>maxx)
        {
            maxx = pr[i];
        }
    }
    cout<<maxx<<endl;
    br=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=i)
        {

           br++;
        }
    }
    cout<<br;
}
