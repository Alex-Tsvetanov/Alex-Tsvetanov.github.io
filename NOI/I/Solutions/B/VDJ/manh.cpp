#include<iostream>
#include<cmath>
using namespace std;
class Tochka
{
    int x,y;
public:
    void setX(short a)
    {
        this->x=a;
    }
    short getX()
    {
        return this->x;
    }
    void setY(short a)
    {
        this->y=a;
    }
    short getY()
    {
        return this->y;
    }
};

int main()
{
    Tochka a1,a2,b1,b2,c;
    short a[2][2],b[2][2];
    bool flag1=0,flag2=0;
    int minn, lenght[6],i=0,j=0,pr=0;
    cin>>a[0][0]>>a[0][1]>>a[1][0]>>a[1][1];
    cin>>b[0][0]>>b[0][1]>>b[1][0]>>b[1][1];
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j]<=0 && a[i][j]>=100)
            {
                return 0;
            }
        }
    }
    a1.setX(min(a[0][0],a[1][0]));
    a1.setY(min(a[0][1],a[1][1]));
    a2.setX(max(a[0][0],a[1][0]));
    a2.setY(max(a[0][1],a[1][1]));
    b1.setX(min(b[0][0],b[1][0]));
    b1.setY(min(b[0][1],b[1][1]));
    b2.setX(max(b[0][0],b[1][0]));
    b2.setY(max(b[0][1],b[1][1]));
    c.setX(min(b1.getX(),b2.getX()));
    c.setY(min(b1.getY(),b2.getY()));
    minn=sqrt(pow((a1.getX()-c.getX()),2))+sqrt(pow((a1.getY()-c.getY()),2));

    for(pr=0 ; pr<b2.getX()-b1.getX()+b2.getY()-b1.getY(); pr++)
    {
        lenght[pr]=sqrt(pow((a1.getX()-c.getX()),2))+sqrt(pow((a1.getY()-c.getY()),2));
        if(lenght[pr]<minn)
        {
            minn=lenght[pr];
        }
        if(b1.getX()==b2.getX())
        {
            flag1=1;
       }
        else
        {
            flag2=1;
        }
        c.setX(c.getX()+flag2);
        c.setY(c.getY()+flag1);
    }
    flag1=0;
    flag2=0;
    c.setX(min(a1.getX(),a2.getX()));
    c.setY(min(a1.getY(),a2.getY()));
    for(pr=0 ; pr<b2.getX()-b1.getX()+b2.getY()-b1.getY(); pr++)
    {
        lenght[pr]=sqrt(pow((a2.getX()-c.getX()),2))+sqrt(pow((a2.getY()-c.getY()),2));
        if(lenght[pr]<minn)
        {
            minn=lenght[pr];
        }
        if(b1.getX()==b2.getX())
        {
            flag1=1;
       }
        else
        {
            flag2=1;
        }
        c.setX(c.getX()+flag2);
        c.setY(c.getY()+flag1);
    }
    flag1=0;
    flag2=0;
    for(pr=0 ; pr<a2.getX()-a1.getX()+a2.getY()-a1.getY(); pr++)
    {
        lenght[pr]=sqrt(pow((b2.getX()-c.getX()),2))+sqrt(pow((b2.getY()-c.getY()),2));
        if(lenght[pr]<minn)
        {
            minn=lenght[pr];
        }
        if(a1.getX()==a2.getX())
        {
            flag1=1;
        }
        else
        {
            flag2=1;
        }
        c.setX(c.getX()+flag2);
    c.setY(c.getY()+flag1);
    }
    flag1=0;
    flag2=0;
    for(pr=0 ; pr<a2.getX()-a1.getX()+a2.getY()-a1.getY(); pr++)
    {
        lenght[pr]=sqrt(pow((b1.getX()-c.getX()),2))+sqrt(pow((b1.getY()-c.getY()),2));
        if(lenght[pr]<minn)
        {
            minn=lenght[pr];
        }
        if(a1.getX()==a2.getX())
        {
            flag1=1;
        }
        else
        {
            flag2=1;
        }
        c.setX(c.getX()+flag2);
    c.setY(c.getY()+flag1);
    }
    cout<<minn;


    return 0;
}
