#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if(n<2 || n>200000)
    {
        return 0;
    }
    int a[n];
    int suma1=0,suma2=0,i=0,j=n-1;
    bool flag=0;
    int pr=0;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    i=0;
    int br=0;
    suma1=a[i];
    suma2=a[j];
    for(i=1; i<n-1; i++)
    {
           flag=0;
        if(suma1>suma2 && flag!=1)
        {
            suma2+=a[n-i-1];
            br++;
            flag=1;
        }
        if(suma2>suma1 && flag!=1)
        {
            suma1+=a[i];
            br++;
            flag=1;
        }
        if(suma1==suma2 && flag!=1)
        {
              br=br+2;
            pr=br;
            suma1+=a[i];
            suma2+=a[n-i-1];
            flag=1;
        }
        if(i>n-i || i>n-i)
        {
               break;
        }
    }

    cout<<pr-2;

    return 0;
}
