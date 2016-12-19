#include <iostream>
using namespace std;
int main () {
char A,B;
long long n1,n2,k;
cin >> n1 >> A;
cin >> n2 >> B;
cin >> k;
if (A=='A') {
    if (n1>=k) {
        cout << k << endl;
    }
    else if (n1<k) {
        cout << n1 << endl;
    }
}
else if (A=='B') {
    if (n1>=k) {
        cout << 0 << endl;
    }
    else if (n1<k) {
        cout << k-n1 << endl;
    }
}
return 0;
}
