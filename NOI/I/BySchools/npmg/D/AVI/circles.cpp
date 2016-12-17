#include<iostream>
using namespace std;
int main()
{


    long long a,b,c,circle,nuli[4];
    char znak;
    cin>>a;
    cin>>b;
    cin>>znak;
    if(znak=='+')
    {
        c=a+b;

        if(znak=='-')
        {

            c=a-b;

            if(znak=='*')
            {
                c=a*b;
            }
        }
    }
    if(a==0 and a==6 or a==9)
    {
        cout<<1;



        if(a==8)
        {
            cout<<2;
        }
        else
        {
            cout<<"0";
        }
    }

    if(b==0 and b==6 or b==9)
    {
        cout<<1;

    }
    else
    {
        cout<<"0";
    }

    if(b==8)
    {
        cout<<2;


    }

    cout<<nuli;








    return 0;
}
