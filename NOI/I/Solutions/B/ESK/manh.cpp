#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    int minx1=x1,maxx1=x1,miny1=y1,maxy1=y1;
    int minx2=x3,maxx2=x3,miny2=y3,maxy2=y3;

    int razx,razy;

    if(x2<minx1)minx1=x2;
    if(x2>maxx1)maxx1=x2;
    if(y2<miny1)miny1=y2;
    if(y2>maxy1)maxy1=y2;

    if(x4<minx2)minx2=x4;
    if(x4>maxx2)maxx2=x4;
    if(y4<miny2)miny2=y4;
    if(y4>maxy2)maxy2=y4;

    if(minx1<=maxx2&&minx2<=maxx1)razx=0;
    else
        razx=min(abs(maxx1-minx2),abs(minx1-maxx2));
    if(miny1<=maxy2&&miny2<=maxy1)razy=0;
    else
        razy=min(abs(maxy1-miny2),abs(miny1-maxy2));
    cout<<razx+razy<<endl;
    return 0;
}
