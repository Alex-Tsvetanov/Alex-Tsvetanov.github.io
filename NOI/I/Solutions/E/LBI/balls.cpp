#include<iostream>
using namespace std;
int main ()
{
    long long a, b, c=0;
    char a1, b1;
    cin>>a>>a1>>b>>b1>>c;
    if(a1=='A')
    {
        if(c<=a)
        {
        cout<<a-(a-c)<<endl;
        }
    else
    {
        cout<<a<<endl;
    }
    }
    else
    {
        if(c>a)
        {
            cout<<c-a<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }


    return 0;
}
