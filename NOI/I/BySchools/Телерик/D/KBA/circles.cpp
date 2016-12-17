#include<iostream>
using namespace std;
int main() {
    unsigned long long a,b,rez=0,krugcheta[10]= {1,0,0,0,0,0,1,0,2,1};
    char znak;
    cin>>a>>b>>znak;
    if(znak=='+') {
        a+=b;
    } else {
        if(znak=='-') {
            a-=b;
        } else {
            a*=b;
        }
    }
    if(a==0) {
        cout<<1;
    } else {
        while(a>0) {
            rez+=krugcheta[a%10];
            a/=10;
        }
        cout<<rez;
    }
    return 0;
}
