#include<iostream>
#include<cmath>
using namespace std;

class ots
{
private:
    int x1,y1,x2,y2;
public:
    ots();
    void vhod();
    void print() const;
    double ygyl() const;
  // int ygyl() const;


};
double ots::ygyl() const
{
    double y=1;
    if(y1==y2)
    {
        return y;
    }
    if(x1==x2)
    {
        return 90;
    }
    int a,b,c;
    if(y1<y2)
    {
        a = x2 - x1;
        b = y2 - y1;
        c = abs(a*a + b*b);
      //  cout<<a<<" "<<b<<" "<<c<<" "<<y<<endl;
    }
    else
    {
        a=x2-x1;
        b=y1-y2;
        c=abs(a*a + b*b);
        y = y*(-1);
       // cout<<a<<" "<<b<<" "<<c<<" "<<y<<endl;
    }
    //int dyljnao = abs((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   // int dyljg = y2 - y1;
    y = y*b/c;
   // cout<<y;
    return y;

}

ots::ots()
{
    x1=0;
    y1=0;
    x2=0;
    y2=0;
}
void ots::vhod()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<c || (a==c && b<d))
    {
        x1=a;
        y1=b;
        x2=c;
        y2=d;
    }
    else
    {
        x1=c;
        y1=d;
        x2=a;
        y2=b;
    }
}

int main()
{
    int n;
    cin>>n;
    ots v[n];
    double kokoshka[n];
    for(int i=0;i<n;i++)
    {
        v[i].vhod();
        kokoshka[i] = v[i].ygyl();
    }
    int broi=0;
    for(int i=0;i<n;i++)
    {
        int lope = 0;
        for(int j=i;j<n;j++)
        {
            if(kokoshka[i]==kokoshka[j])
            {
               // cout<<kokoshka[i]<<"=?";
               // cout<<kokoshka[j]<<"->";
                lope++;
            }
        }
        if(lope < 2)
        {
            broi++;
        }
    }
    cout<<broi;




    return 0;
}
