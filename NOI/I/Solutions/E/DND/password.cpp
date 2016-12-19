#include<iostream>
using namespace std;
int main(){
    string as, bs;
    cin>>as>>bs;
    const char* a = as.c_str();
    const char* b = bs.c_str();
    short s[2];
    s[0]=0;s[1]=0;
    for(short c=0;c<4;c++){
        if(a[c]>='a' && a[c]<='z') s[0] += a[c] - 96;
        if(a[c]>='A' && a[c]<='Z') s[0] += (a[c] - 64)*2;
        if(a[c]>='0' && a[c]<='9') s[0] += a[c] - '0';
    }
    for(short c=0;c<4;c++){
        if(b[c]>='a' && b[c]<='z') s[1] += b[c] - 96;
        if(b[c]>='A' && b[c]<='Z') s[1] += (b[c] - 64)*2;
        if(b[c]>='0' && b[c]<='9') s[1] += b[c] - '0';
    }
    if(s[0]>s[1]) cout<<a<<' '<<s[0];
    else if(s[0]<s[1]) cout<<b<<' '<<s[1];
    else cout<<0;
    return 0;
}
