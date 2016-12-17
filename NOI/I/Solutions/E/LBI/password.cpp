#include<iostream>
using namespace std;
int main ()
{
    char a1,a2,a3,a4,b1,b2,b3,b4;
    long long a=0,b=0;
    cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4;
    if(a1>='a' and a1<='z')
    {
        a=a+(a1-'a')+1;
    }
    if(a1>='A' and a1<='Z')
    {
        a=a+((2*(a1-'A'))+1);
    }
    if(a1>='1' and a1<='9')
    {
        a=a+(a1-'0');
    }






    if(a2>='a' and a2<='z')
    {
        a=a+(a2-'a')+1;
    }
    if(a2>='A' and a2<='Z')
    {
        a=a+((2*(a2-'A'))+1);
    }
    if(a2>='1' and a2<='9')
    {
        a=a+(a2-'0');
    }





        if(a3>='a' and a3<='z')
    {
        a=a+(a3-'a')+1;
    }
    if(a3>='A' and a3<='Z')
    {
        a=a+((2*(a3-'A'))+1);
    }
    if(a3>='1' and a3<='9')
    {
        a=a+(a3-'0');
    }










    if(a4>='a' and a4<='z')
    {
        a=a+(a4-'a')+1;
    }
    if(a4>='A' and a4<='Z')
    {
        a=a+((2*(a4-'A'))+1);
    }
    if(a4>='1' and a4<='9')
    {
        a=a+(a4-'0');
    }

































    if(b1>='a' and b1<='z')
    {
        b=b+(b1-'a')+1;
    }
    if(b1>='A' and b1<='Z')
    {
        b=b+((2*(b1-'A'))+1);
    }
    if(b1>='1' and b1<='9')
    {
        b=b+(b1-'0');
    }






    if(b2>='a' and b2<='z')
    {
        b=b+(b2-'a')+1;
    }
    if(b2>='A' and b2<='Z')
    {
        b=b+((2*(b2-'A'))+1);
    }
    if(b2>='1' and b2<='9')
    {
        b=b+(b2-'0');
    }





        if(b3>='a' and b3<='z')
    {
        b=b+(b3-'a')+1;
    }
    if(b3>='A' and b3<='Z')
    {
        b=b+((2*(b3-'A'))+1);
    }
    if(b3>='1' and b3<='9')
    {
        b=b+(b3-'0');
    }










    if(b4>='a' and b4<='z')
    {
        b=b+(b4-'a')+1;
    }
    if(b4>='A' and b4<='Z')
    {
        b=b+((2*(b4-'A'))+1);
    }
    if(b4>='1' and b4<='9')
    {
        b=b+(b4-'0');
    }

    if(b>a)
    {
        cout<<b1<<b2<<b3<<b4<<" "<<b<<endl;
    }
    else
    {
        cout<<a1<<a2<<a3<<a4<<" "<<a<<endl;
    }
    return 0;
}
