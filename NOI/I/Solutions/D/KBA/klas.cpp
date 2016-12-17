#include<iostream>
using namespace std;
int main() {
    long long in1,in2,rez1=0,rez2=0;
    cin>>in1>>in2;
    for(long long a=2; a<=in1; a++) {
        rez1+=(a-1);
    }
    for(long long a=1; a<=in2; a++) {
        rez2+=(2*(in2+in1-a));
    }
    cout<<rez1<<" "<<rez2;
    return 0;
}
