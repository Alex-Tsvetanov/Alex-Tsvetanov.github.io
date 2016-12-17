#include<iostream>
using namespace std;
int main() {

    long long firstn, secondn;
    char firstl, secondl;
    long long k;
    cin>>firstn>>firstl;
    cin>>secondn>>secondl;
    cin>>k;

    if(firstl=='B') {
        k-=firstn;
        if(k<=0) {
            cout<<0;
            return 0;
        }
        cout<<k<<endl;
    }

    if(firstl=='A') {
        if(firstn>=k) {
            cout<<k<<endl;
        } else {
            cout<<firstn<<endl;
        }
    }


    return 0;
}
