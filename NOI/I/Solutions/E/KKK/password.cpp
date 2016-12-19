#include <iostream>
using namespace std;
int main()
{
    char a1,b1,c1,d1,as1,bs1,cs1,ds1,a2,b2,c2,d2,as2,bs2,cs2,ds2;
    long long sra,srb,aotg1,botg1,cotg1,dotg1,aotg2,botg2,cotg2,dotg2;
    cin>>a1>>b1>>c1>>d1;
    as1=a1;
    bs1=b1;
    cs1=c1;
    ds1=d1;
    a1=a1-'@';
    b1=b1-'@';
    c1=c1-'@';
    d1=d1-'@';
    if(a1>0 && a1<25)
    {
        aotg1=a1*2;
    }
    if(b1>0 && b1<25)
    {
        botg1=b1*2;
    }
    if(c1>0 && c1<25)
    {
        cotg1=c1*2;
    }
    if(d1>0 && d1<25)
    {
        dotg1=d1*2;
    }
    a1=as1;
    b1=bs1;
    c1=cs1;
    d1=ds1;
    a1=a1-'/';
    b1=b1-'/';
    c1=c1-'/';
    d1=d1-'/';
    if(a1>0 && a1<11)
    {
        aotg1=a1;
    }
    if(b1>0 && b1<11)
    {
        botg1=b1;
    }
    if(c1>0 && c1<11)
    {
        cotg1=c1;
    }
    if(d1>0 && d1<11)
    {
        dotg1=d1;
    }
    a1=as1;
    b1=bs1;
    c1=cs1;
    d1=ds1;
    a1=a1-'`';
    b1=b1-'`';
    c1=c1-'`';
    d1=d1-'`';
    if(a1>0 && a1<25)
    {
        aotg1=a1;
    }
    if(b1>0 && b1<25)
    {
        botg1=b1;
    }
    if(c1>0 && c1<25)
    {
        cotg1=c1;
    }
    if(d1>0 && d1<25)
    {
        dotg1=d1;
    }
    sra=aotg1+botg1+cotg1+dotg1;
    cin>>a2>>b2>>c2>>d2;
    as2=a2;
    bs2=b2;
    cs2=c2;
    ds2=d2;
    a2=a2-'@';
    b2=b2-'@';
    c2=c2-'@';
    d2=d2-'@';
    if(a2>0 && a2<25)
    {
        aotg2=a2*2;
    }
    if(b2>0 && b2<25)
    {
        botg2=b2*2;
    }
    if(c2>0 && c2<25)
    {
        cotg2=c2*2;
    }
    if(d2>0 && d2<25)
    {
        dotg2=d2*2;
    }
    a2=as2;
    b2=bs2;
    c2=cs2;
    d2=ds2;
    a2=a2-'0';
    b2=b2-'0';
    c2=c2-'0';
    d2=d2-'0';
    if(a2>0 && a2<11)
    {
        aotg2=a2;
    }
    if(b2>0 && b2<11)
    {
        botg2=b2;
    }
    if(c2>0 && c2<11)
    {
        cotg2=c2;
    }
    if(d2>0 && d2<11)
    {
        dotg2=d2;
    }
    a2=as2;
    b2=bs2;
    c2=cs2;
    d2=ds2;
    a2=a2-'`';
    b2=b2-'`';
    c2=c2-'`';
    d2=d2-'`';
    if(a2>0 && a2<25)
    {
        aotg2=a2;
    }
    if(b2>0 && b2<25)
    {
        botg2=b2;
    }
    if(c2>0 && c2<25)
    {
        cotg2=c2;
    }
    if(d2>0 && d2<25)
    {
        dotg2=d2;
    }
    srb=aotg2+botg2+cotg2+dotg2;
    if(sra>srb)
    {
        cout<<as1<<bs1<<cs1<<ds1<<" "<<sra;
    }
    else
    {
        cout<<as2<<bs2<<cs2<<ds2<<" "<<srb;
    }
    cout<<endl;
    return 0;
}
