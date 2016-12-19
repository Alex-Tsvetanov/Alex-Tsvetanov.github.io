#include<iostream>
using namespace std;
int main() {
    char a,b,c,d;
    char a2,b2,c2,d2;
    long long a3,b3,c3,d3;
    long long a4,b4,c4,d4;
    cin>>a>>b>>c>>d>>a2>>b2>>c2>>d2;
    if(a>='a' and a<='z') {
        a3=a-'a'+1;
    }
    if(a>='A' and a<='Z') {
        a3=(a-'A'+1)*2;
    }
    if(a>='0' and a<='9') {
        a3=a-'0';
    }


    if(b>='a' and b<='z') {
        b3=b-'a'+1;
    }
    if(b>='A' and b<='Z') {
        b3=(b-'A'+1)*2;
    }
    if(b>='0' and b<='9') {
        b3=b-'0';
    }


    if(c>='a' and c<='z') {
        c3=c-'a'+1;
    }
    if(c>='A' and c<='Z') {
        c3=(c-'A'+1)*2;
    }
    if(c>='0' and c<='9') {
        c3=c-'0';
    }


    if(d>='a' and d<='z') {
        d3=d-'a'+1;
    }
    if(d>='A' and d<='Z') {
        d3=(d-'A'+1)*2;
    }
    if(d>='0' and d<='9') {
        d3=d-'0';
    }


    if(a2>='a' and a2<='z') {
        a4=a2-'a'+1;
    }
    if(a2>='A' and a2<='Z') {
        a4=(a2-'A'+1)*2;
    }
    if(a2>='0' and a2<='9') {
        a4=a2-'0';
    }


    if(b2>='a' and b2<='z') {
        b4=b2-'a'+1;
    }
    if(b2>='A' and b2<='Z') {
        b4=(b2-'A'+1)*2;
    }
    if(b2>='0' and b2<='9') {
        b4=b2-'0';
    }


    if(c2>='a' and c2<='z') {
        c4=c2-'a'+1;
    }
    if(c2>='A' and c2<='Z') {
        c4=(c2-'A'+1)*2;
    }
    if(c2>='0' and c2<='9') {
        c4=c2-'0';
    }


    if(d2>='a' and d2<='z') {
        d4=d2-'a'+1;
    }
    if(d2>='A' and d2<='Z') {
        d4=(d2-'A'+1)*2;
    }
    if(d2>='0' and d2<='9') {
        d4=d2-'0';
    }
    if(a3+b3+c3+d3>a4+b4+c4+d4) {
        cout<<a<<b<<c<<d<<" "<<a3+b3+c3+d3<<endl;
    }
    if(a3+b3+c3+d3<a4+b4+c4+d4) {
        cout<<a2<<b2<<c2<<d2<<" "<<a4+b4+c4+d4<<endl;
    }
    if(a3+b3+c3+d3==a4+b4+c4+d4) {
        cout<<"0"<<endl;
    }
    return 0;
}
