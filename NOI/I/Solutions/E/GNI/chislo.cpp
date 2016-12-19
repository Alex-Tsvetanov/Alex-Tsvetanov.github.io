#include <iostream>
using namespace std;

int main () {
    long long a, b;
    cin >> a >> b;

    if (a==6 and b==6) {
        cout << 99 << endl;
    }
    else {
        if (a==6) {
            cout << 9 << b << endl;
        }
        else {
            if (b==6) {
                cout << 9 << a << endl;
            }
            else {
                if (b>a) {
                    swap (a,b);
                }
                cout << a << b << endl;
            }
        }
    }

return 0;
}

