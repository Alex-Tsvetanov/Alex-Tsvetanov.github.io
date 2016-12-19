#include <iostream>
using namespace std;
class A
{
    public:int x1,y1,x2,y2;
    void geta(int, int, int, int);
};
void A::geta(int a,int b,int c,int d)
{
    x1=a;y1=b;x2=c;y2=d;
}
int main()
{
    int n;
    cin>>n;
    A b[n];
    int q,p,r,s;
    for(int i=0;i<n;i++)
    {
        cin>>q>>p>>r>>s;
        b[i].geta(q,p,r,s);
    }
    double tg;
    double c[n];
    int br=n;
    for(int i=0;i<n;i++)
    {
        if(b[i].y1==b[i].y2)
        {
            for(int j=0;j<i;j++)
            {
                c[i]=101;
                if(c[i]==c[j])
                {
                    br--;
                    continue;
                }
            }
            continue;
        }
        tg=((b[i].x2-b[i].x1)/(b[i].y2-b[i].y1));
        c[i]=tg;
            for(int j=0;j<i;j++)
            {
                if(c[i]==c[j])
                {
                    br--;
                    break;
                }
            }
    }
    cout<<br;
}
