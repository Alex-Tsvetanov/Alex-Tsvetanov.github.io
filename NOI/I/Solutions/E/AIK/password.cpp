#include <iostream>
using namespace std;
int main(){
    char a1,b1,c1,d1,a2,b2,c2,d2;
    long long a1l,b1l,c1l,d1l,a2l,b2l,c2l,d2l,p1,p2;
    cin>>a1>>b1>>c1>>d1>>a2>>b2>>c2>>d2;
    if(a1>='a'&&a1<='z')a1l=(a1-'a')+1;
    if(a1>='A'&&a1<='Z')a1l=(a1-'A')+1;
    if(a1>='0'&&a1<='9')a1l=(a1-'0');

    if(b1>='a'&&b1<='z')b1l=(b1-'a')+1;
    if(b1>='A'&&b1<='Z')b1l=(b1-'A')+1;
    if(b1>='0'&&b1<='9')b1l=(b1-'0');

    if(c1>='a'&&c1<='z')c1l=(c1-'a')+1;
    if(c1>='A'&&c1<='Z')c1l=(c1-'A')+1;
    if(c1>='0'&&c1<='9')c1l=(c1-'0');

    if(d1>='a'&&d1<='z')d1l=(d1-'a')+1;
    if(d1>='A'&&d1<='Z')d1l=(d1-'A')+1;
    if(d1>='0'&&d1<='9')d1l=(d1-'0');

    if(a2>='a'&&a2<='z')a2l=(a2-'a')+1;
    if(a2>='A'&&a2<='Z')a2l=(a2-'A')+1;
    if(a2>='0'&&a2<='9')a2l=(a2-'0');

    if(b2>='a'&&b1<='z')b2l=(b2-'a')+1;
    if(b2>='A'&&b1<='Z')b2l=(b2-'A')+1;
    if(b2>='0'&&b1<='9')b2l=(b2-'0');

    if(c2>='a'&&c2<='z')c2l=(c2-'a')+1;
    if(c2>='A'&&c2<='Z')c2l=(c2-'A')+1;
    if(c2>='0'&&c2<='9')c2l=(c2-'0');

     if(d2>='a'&&d2<='z')d2l=(d2-'a')+1;
    if(d2>='A'&&d2<='Z')d2l=(d2-'A')+1;
    if(d2>='0'&&d2<='9')d2l=(d2-'0');

    p1=a1l+b1l+c1l+d1l;
    p2=a2l+b2l+c2l+d2l;

    if(p1>p2){
            cout<<a1<<b1<<c1<<d1<<" "<<p1;
    }else{
        cout<<a2<<b2<<c2<<d2<<" "<<p2;
    }
    return 0;
}
