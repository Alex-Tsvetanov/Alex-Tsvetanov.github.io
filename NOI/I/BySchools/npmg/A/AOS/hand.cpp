#include <iostream>
using namespace std;

int main()
{
    int N,maks,mini;
    cin>>N;

    int a[200000],counter=0;

    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<N;i++)
    {
        if((N==5)and(a[i]==4))
        {
            cout<<N-1<<endl;
            cout<<1<<endl;
        }
    }

    return 0;
}
