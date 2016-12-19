#include<iostream>
using namespace std;
int main() {
    long long a,b;
    cin>>a>>b;
    if(a==1) {}
    if(a==8) {}
    if(a==6) {
        a=9;
    } else {
        if(a==9) {
            a=6;
        }
    }
    if(b==1) {}
    if(b==8) {}
    if(b==6) {
        b=9;
    } else {
        if(b==9) {
            b=6;
        }
    }
    if(a>=b) {
        cout<<a<<b<<endl;
    } else {
        cout<<b<<a<<endl;
    }
    return 0;
}
