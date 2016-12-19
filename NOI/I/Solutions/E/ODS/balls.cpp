#include <iostream>
using namespace std;
int main () {
    long long A,B,k,n1,n2,longLongChisloNomer1,LongLongNomer2Chislo,izhod;
    char chisloNomer1,nomer2Chislo;
    cin>>n1>>chisloNomer1;
    cin>>n2>>nomer2Chislo;
    cin>>k;
    if (chisloNomer1=='A') {
        if (k>=n1) {
            cout<<n1;
        }else{
        cout<<k;
        }
    }else{
    if (k>n1) {
        cout<<k-n1;
    }else{
    cout<<"0";
    }
    }


return 0;
}
