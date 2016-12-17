#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct line
{
    short x,y,x1,y1;
};
struct slp
{
    double cosa;

};


vector <slp> asd;


void slopes(line a)
{
    bool suv=0;

    double j,k,l;
    j=a.x-a.x1;

    if(j<0)j*=-1;
    k=a.y-a.y1;
    if(k<0)k*=-1;

    l=sqrt((j*j)+(k*k));

    if(asd.size()!=0)
    {
        for(int i=0; i<=asd.size(); i++)
        {
            bool trues=0;
            if(asd[i].cosa==l/j)
            {
                 trues=1;

            }
            if(trues==1)
            {
                suv=1;
                break;
            }
        }
    }

    //cout<<l/j<<endl;
    if(suv==0)
    {
        //cout<<"here"<<endl;
        slp tr1;
        tr1.cosa=l/j;
        asd.push_back(tr1);

    }


    }

    int main()
    {
        short n;
        scanf("%d",&n);
        line a[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d%d%d%d",&a[i].x,&a[i].y,&a[i].x1,&a[i].y1);
            slopes(a[i]);
        }
        cout<<asd.size()<<endl;


        return 0;
    }
