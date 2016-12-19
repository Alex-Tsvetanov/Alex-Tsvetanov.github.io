#include<iostream>
using namespace std;
int main()
{
    int n , br=0;
    do{
        cout<<"vuvedete broi slujiteli:";
        cin>>n;
    }while(n<2||n>200000);
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
       do{cout<<"slujitel"<<i<<":";
       cin>>a[i];}while(a[i]>i);
    }
    int maxa=a[n-1] , mina=n;
    for(int i=n-2 ; i>=0 ; i--)
    {
        br=0;
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]>0)br++;
        }
        if(maxa<(a[i]+br))maxa=(a[i]+br);
    }
    for(int i=0 ; i<n-1; i++)
    {
        br=0;
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]==j)br++;
        }
        if(mina>(a[i]+br))mina=(a[i]+br);
    }
    if(a[n-1]<mina)mina=a[n-1];
    cout<<"max:"<<maxa<<endl;
    cout<<"min:"<<mina;
}
