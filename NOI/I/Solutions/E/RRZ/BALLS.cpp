#include<iostream>
using namespace std;
int main()
{
    long long n1,n2,k;
    char i,j;
    cin>>n1>>i;
    cin>>n2>>j;
    cin>>k;
    if(i=='A' && n1<k)
    {
        cout<<n1<<endl;
    }
    else if(i=='A' && n1>k)
    {
        cout<<k<<endl;
    }
    else if(i=='B' && n1>k)
    {
        cout<<0<<endl;
    }
    else if(i=='B' && k>n1)
    {
        cout<<k-n1<<endl;
    }

    return 0;
}
