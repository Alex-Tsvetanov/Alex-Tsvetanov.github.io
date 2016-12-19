#include <iostream>
using namespace std;

int main () {
    long long m, n, k;
    char a, b;

    cin >> m >> a >> n >> b >> k;
    if (b=='A') {
        if (k-m>0) {
            cout << k-m << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    else {
        if (m>k) {
            cout << k << endl;
        }
        else {
            cout << m << endl;
        }
    }

return 0;
}
