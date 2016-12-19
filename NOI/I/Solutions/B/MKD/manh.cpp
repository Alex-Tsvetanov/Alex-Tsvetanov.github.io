#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x1==x2 and x3==x4)
    {
        if(max(y1,y2)>=min(y3,y4) or max(y3,y4)>=min(y1,y2))
        {
            cout<<max(x1,x3)-min(x1,x3);
            return 0;
        }
        if(y1<y3) cout<<max(x1,x3)-min(x1,x3)+min(y3,y4)-max(y1,y2);
        else cout<<max(x1,x3)-min(x1,x3)+min(y1,y2)-max(y3,y4);
        return 0;
    }
    if(y1==y2 and y3==y4)
    {
        if(max(x1,x2)>=min(x3,x4) or max(x3,x4)>=min(x1,x2))
        {
            cout<<max(y1,y3)-min(y1,y3);
            return 0;
        }
        if(x1<x3) cout<<max(y1,y3)-min(y1,y3)+min(x3,x4)-max(x1,x2);
        else cout<<max(y1,y3)-min(y1,y3)+min(x1,x2)-max(x3,x4);
        return 0;
    }
    if(x1==x2)
    {
        int a,b;
        if(x1>=min(x3,x4) and x1<=max(x3,x4))
        {
            a=0;
        }
        else
        {
            if(x1<x3) a=min(x3,x4)-x1;
            else a=x1-max(x3,x4);
        }
        if(y3>=min(y1,y2) and y3<=max(y1,y2))
        {
            b=0;
        }
        else
        {
            if(y1<y3) b=y3-max(y1,y2);
            else b=min(y1,y2)-y3;
        }
        cout<<a+b;
        return 0;
    }
    if(y1==y2)
    {
        int a,b;
        if(y1>=min(y3,y4) and y1<=max(y3,y4))
        {
            a=0;
        }
        else
        {
            if(y1<y3) a=min(y3,y4)-y1;
            else a=y1-max(y3,y4);
        }
        if(x3>=min(x1,x2) and x3<=max(x1,x2))
        {
            b=0;
        }
        else
        {
            if(x1<x3) b=x3-max(x1,x2);
            else b=min(x1,x2)-x3;
        }
        cout<<a+b;
    }
    return 0;
}
