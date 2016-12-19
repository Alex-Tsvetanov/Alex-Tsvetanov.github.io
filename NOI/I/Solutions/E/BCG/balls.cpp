#include <iostream>
using namespace std;

int main () {

long long a1, b1, k;
char A, B;
cin >> a1 >> A;
cin >> b1 >> B;
cin >> k;

if (A == 'A' and k <= a1) {
    cout << k << endl;
}

if (A == 'A' and k > a1) {
    cout << a1 << endl;
}

if (A == 'B' and k <= a1) {
    cout << "0" << endl;
}

if (A == 'B' and k > a1 and (k - a1) <= b1) {
    cout << k - a1 << endl;
}

if (A == 'B' and k > a1 and (k - a1) > b1) {
    cout << b1 << endl;
}

return 0;
}
