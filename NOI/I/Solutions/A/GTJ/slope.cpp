#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct dd
{
    //bool pos;
    long long u,d;
    bool eq(dd d2)
    {
        if(u*d2.d==d*d2.u//and pos==d2->pos
           )return 1;
        return 0;
    }
};

int main()
{
    int N;
    cin>>N;
    vector<dd> v;
    int a90=0, a0=0;
    for(int i=0;i<N;i++)
    {
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        if(x==x1)
        {
            a90=1;
        }else if(y==y1)
        {
            a0=1;
        }
        else //if(x<x1  and y2>y1)
        {
            dd D;
            //D.pos=1;
            D.u=y-y1;
            D.d=x-x1;
            //cout<<D.u<<" "<<D.d<<endl;
            int flag=1;
            for(int j=0;j<v.size();j++)
            {
                if(v[j].eq(D))flag=0;
            }
            if(flag)v.push_back(D);
        }


    }
    //cout<<"ZZZZZZZZZZz\n";
    //for(int i=0;i<v.size();i++)cout<<v[i].u<<" "<<v[i].d<<"\n";
    cout<<v.size()+a90+a0<<endl;
    return 0;
}

