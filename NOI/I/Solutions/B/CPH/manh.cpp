#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3, a4, b1, b2, b3, b4, s, t, st = 0, q, a;
    cin>>a1>>a2>>a3>>a4;
    cin>>b1>>b2>>b3>>b4;
    if(a1 == a3)
    {
        if(a2 > a4)
        {
            s = a2 - a4 + 1;
        }
        else
        {
            s = a4 - a2 +1;
        }
    }
    else if(a1 > a3)
    {
        s = a1 - a3 + 1;
    }
    else
    {
        s = a3 - a1 + 1;
    }
    if(b1 == b3)
    {
        if(b2 > b4)
        {
            t = b2 - b4 + 1;
        }
        else
        {
            t = b4 - b2 +1;
        }
    }
    else if(b1>b3)
    {
        t = b1 - b3 + 1;
    }
    else
    {
        b3 - b1 +1;
    }
    q = a1;
    a = a2;
    for(int i = 0; i<t; i++)
    {
        for(int j = 0; j<s; j++)
        {
            if(st<(a1-b1)+(a2-b2))
            {
                // cout<<a1<<" "<<b1<<" "<<a2<<" "<<b2<<endl;

                if(st == 0)
                {
                    st = (a1-b1)+(a2-b2);

                }
                st = (a1-b1)+(a2-b2);
            }
            if(a1>a3){a1++;}
            if(a2>a4)
            {
                a2++;
            }
        }
        if(b1<b3)
        {
            b1++;
        }
        if(b2<b4)
        {
            b2++;
        }
        a1 = q;
        a2 = a;


    }cout<<st<<endl;

    return 0;
}

