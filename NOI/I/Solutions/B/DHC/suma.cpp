#include<iostream>
using namespace std;
int main()
{
    int n, a[200000], sumaL=0, current=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sumaL=a[0];
    for(int i=0; i<n-1; i++)
    {
        int sumaR=a[n-1];
        for(int k=n-1; sumaR<=sumaL and k>i; k--)
        {
            if(sumaR==sumaL)
            {
                current=max(current, (i+(n-k)+1));
            }
            sumaR=sumaR+a[k-1];
        }
        sumaL=sumaL+a[i+1];
    }
    cout<<current<<endl;
    return 0;
}
