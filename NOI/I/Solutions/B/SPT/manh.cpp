#include<iostream>
#include<cmath>
using namespace std;
int rzs(int x1,int y1, int x2, int y2)
{
    return abs(x1-x2)+abs(y1-y2);
}
int main(){
int x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1>>x2>>y2;
cin>>x3>>y3>>x4>>y4;
if((x1==x3 && y1==y3)||
   (x1==x4 && y1==y4)||
   (x2==x3 && y2==y3)||
   (x2==x4 && y2==y4))
{
    cout<<0<<endl;
        return 0;
}
if(x2<x1)
{
     swap(x2,x1);
     swap(y2,y1);
}
if(x4<x3)
{
    swap(x4, x3);
    swap(y4, y3);
}
if(y2>y1)
{
     swap(x2,x1);
     swap(y2,y1);
}
if(y4>y3)
{
    swap(x4, x3);
    swap(y4, y3);
}
//cout<<x1<<" "<<y1<<"   "<<x2<<" "<<y2<<endl<<x3<<" "<<y3<<"   "<<x4<<" "<<y4<<endl;
if(y1==y2 && y3==y4)/// usporedni =
{
    if(x2<=x3) /// ne se dokosvat
    {
        cout<<rzs(x2,y2,x3,y3)<<endl;
        return 0;
    }
    if(x4<=x1)
    {
        cout<<rzs(x4,y4,x1,y1)<<endl;
        return 0;/// ne se dokosvat
    }
    cout<<abs(y1-y3)<<endl;
    return 0;
}
if(x1==x2 && x3==x4)///usporedni ||
{
    if(y2>=y3)
    {
        cout<<rzs(x2,y2,x3,y3)<<endl;
        return 0;
    }
    if(y4>=y1)
    {
        cout<<rzs(x4,y4,x1,y1)<<endl;
        return 0;
    }
    cout<<abs(x1-x3)<<endl;
}
/// purvata shte e horizontalna
if(y1!=y2)
{
    swap(x1,x3);
    swap(y1,y3);
    swap(x2,x4);
    swap(y2,y4);
}
if(x3<=x1 && (y3<=y1 || y4>=y1))/// ne se dokosvat
{
    cout<<min(rzs(x1,y1,x3,y3) , rzs(x1,y1,x4,y4))<<endl;
    return 0;
}
if(x2<=x3 && (y3<=y1 || y4>=y1))
{
    cout<<min(rzs(x2,y2,x3,y3), rzs(x2,y2,x4,y4))<<endl;
    return 0;
}
if((x1<=x3 && x2>=x3) && (y3<=y1 || y4>=y1))///T
{
    cout<<abs(y1-y3)<<endl;
    return 0;
}
if(x1<=x3 && x2>=x3 && y3>=y1 && y4<=y1)///se presichat
{
 int    minn=rzs(x3,y3,x2,y2);
    minn=min(minn,rzs(x2,y2,x4,y4));
    minn=min(minn,rzs(x1,y1,x4,y4));
    minn=min(minn,rzs(x1,y1,x3,y3));
    cout<<minn<<endl;
    return 0;
}


return 0;
}
