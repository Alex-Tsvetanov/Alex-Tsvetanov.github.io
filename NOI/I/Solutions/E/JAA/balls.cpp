#include<iostream>
using namespace std;
int main() {
    long long k,n1,n2;
    char A,B;
    cin>>n1;
    cin>>A;
    cin>>n2>>B;
    cin>>k;
    if(A=='A') {
        if(k<=n1) {
            cout<<k<<endl;
        } else {
            cout<<n1<<endl;
        }
    }
    if(A=='B') {
        if(k<=n1) {
            cout<<"0"<<endl;
        } else {
            cout<<k-n1<<endl;
        }
    }

    return 0;
}
