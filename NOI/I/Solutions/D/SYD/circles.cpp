#include<iostream>
using namespace std;
int main()
{
    long long a,b,d,e,h=0;
    char c;
    cin>>a>>b>>c;
    if(c=='+')
    {
        d=a+b;
        for(; d>0; d=d/10)
        {
            e=d%10;
              if(e==6 or e==9 or e==0)
            {
                h++;
            }
            if(e==8)
            {
                h=h+2;
            }
        }
        cout<<h;
        return 0;
    }
    if(c=='*')
    {
        d=a*b;
        for(; d>0; d=d/10)
        {
            e=d%10;
              if(e==6 or e==9 or e==0)
            {
                h++;
            }
            if(e==8)
            {
                h=h+2;
            }
        }
        cout<<h;
        return 0;
    }
    if(c=='-')
    {
        d=a-b;
        if(d==0){
            cout<<1;
            return 0;
        }
        for(; d>0; d=d/10)
        {
            e=d%10;
              if(e==6 or e==9 or e==0)
            {
                h++;
            }
            if(e==8)
            {
                h=h+2;
            }
        }
        cout<<h;
        return 0;
    }
    cout<<a/0;
    return 0;
}
