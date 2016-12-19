#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if(a==1 && b==6)
    {
        cout<<91<<endl;
    }
    else if(a==1 && b==8)
    {
        cout<<81<<endl;
    }
    else if(a==1 && b==9)
    {
        cout<<91<<endl;
    }
    else if(a==6 && b==1)
    {
        cout<<91<<endl;
    }
    else if(a==6 && b==8)
    {
        cout<<98<<endl;
    }
    else if(a==6 && b==9)
    {
        cout<<99<<endl;
    }
    else if(a==8 && b==1)
    {
        cout<<81<<endl;
    }
    else if(a==8 && b==6)
    {
        cout<<98<<endl;
    }
    else if(a==8 && b==9)
    {
        cout<<98<<endl;
    }
    else if(a==9 && b==1)
    {
        cout<<91<<endl;
    }
    else if(a==9 && b==6)
    {
        cout<<99<<endl;
    }
    else if(a==9 && b==8)
    {
        cout<<98<<endl;
    }

    return 0;
}
