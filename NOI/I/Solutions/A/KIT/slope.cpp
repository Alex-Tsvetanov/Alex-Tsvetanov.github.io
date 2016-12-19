#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
queue<double> ugly;
double absi(int a)
{
    if(a<0)
    {
        return a*(-1);
    }
    return a;
}
double pita(double a,double b,double c,double d)
{
    double x=absi(a-c);
    double y=absi(b-d);
    return sqrt(x*x+y*y);
}
void novo(double x1,double y1,double x2,double y2)
{
    double ugul=absi(y1-y2)/pita(x1,y1,x2,y2);
    for(int i=0;i<ugly.size();i++)
    {
        double k=ugly.front();
        ugly.pop();
        ugly.push(k);
        if(k==ugul)
        {
            return;
        }
    }
    if(y1>y2)
    {
        ugly.push(ugul*(-1));
    }
    else
    {
        ugly.push(ugul);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        novo(x1,y1,x2,y2);
    }
    cout<<ugly.size()<<endl;
}
