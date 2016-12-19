#include<iostream>
using namespace std;
int main()
{
    char p1,p2,p3,p4,p5,p6,p7,p8;
    long long  s1,s2,s3,s4,s5,s6,s7,s8,stoinostnaparola1,stoinostnaparola2;
    cin>>p1>>p2>>p3>>p4;
    cin>>p5>>p6>>p7>>p8;
    s1=p1;
    s2=p2;
    s3=p3;
    s4=p4;
    s5=p5;
    s6=p6;
    s7=p7;
    s8=p8;
    if(s1>='a' and s1<='z')
    {
        s1=(s1-'a')+1;
    }
    if(s2>='a' and s2<='z')
    {
        s2=(s2-'a')+1;
    }
    if(s3>='a' and s3<='z')
    {
        s3=(s3-'a')+1;
    }
    if(s4>='a' and s4<='z')
    {
        s4=(s4-'a')+1;
    }
    if(s5>='a' and s5<='z')
    {
        s5=(s5-'a')+1;
    }
    if(s6>='a' and s6<='z')
    {
        s6=(s6-'a')+1;
    }

    if(s7>='a' and s7<='z')
    {
        s7=(s7-'a')+1;
    }
    if(s8>='a' and s8<='z')
    {
        s8=(s8-'a')+1;
    }
    if(s1>='A'and s1<='Z')
    {
        s1=((s1-'A')+1)*2;
    }
    if(s2>='A' and s2<='Z')
    {
        s2=((s2-'A')+1)*2;
    }
    if(s3>='A' and s3<='Z')
    {
        s3=((s3-'A')+1)*2;
    }
    if(s4>='A' and s4<='Z')
    {
        s4=((s4-'A')+1)*2;
    }
    if(s5>='A' and s5<='Z')
    {
        s5=((s5-'A')+1)*2;
    }
    if(s6>='A' and s6<='Z')
    {
        s6=((s6-'A')+1)*2;
    }
    if(s7>='A' and s7<='Z')
    {
        s7=((s7-'A')+1)*2;
    }
    if(s8>='A' and s8<='Z')
    {
        s8=((s8-'A')+1)*2;
    }

    if(s1>='1' and s1<='9') s1=(s1-'1')+1;
    if(s2>='1' and s2<='9') s2=(s2-'1')+1;
    if(s3>='1' and s3<='9') s3=(s3-'1')+1;
    if(s4>='1' and s4<='9') s4=(s4-'1')+1;
    if(s5>='1' and s5<='9') s5=(s5-'1')+1;
    if(s6>='1' and s6<='9') s6=(s6-'1')+1;
    if(s7>='1' and s7<='9') s7=(s7-'1')+1;
    if(s8>='1' and s8<='9') s8=(s8-'1')+1;
    if(p1=='Z') s1=52;
    if(p2=='Z') s2=52;
    if(p3=='Z') s3=52;
    if(p4=='Z') s4=52;
    if(p5=='Z') s5=52;
    if(p6=='Z') s6=52;
    if(p7=='Z') s7=52;
    if(p7=='Z') s7=52;
    if(p8=='Z') s8=52;
    if(p1=='Y') s1=50;
    if(p2=='Y') s2=50;
    if(p3=='Y') s3=50;
    if(p4=='Y') s4=50;
    if(p5=='Y') s5=50;
    if(p6=='Y') s6=50;
    if(p7=='Y') s7=50;
    if(p7=='Y') s7=50;
    if(p8=='Y') s8=50;
    stoinostnaparola1=s1+s2+s3+s4;
    stoinostnaparola2=s5+s6+s7+s8;

    if(stoinostnaparola1>stoinostnaparola2) cout<<p1<<p2<<p3<<p4<<" "<<stoinostnaparola1<<endl;
    if(stoinostnaparola1<stoinostnaparola2) cout<<p5<<p6<<p7<<p8<<" "<<stoinostnaparola2<<endl;
    if(stoinostnaparola1==stoinostnaparola2) cout<<"0";
    return 0;
}
