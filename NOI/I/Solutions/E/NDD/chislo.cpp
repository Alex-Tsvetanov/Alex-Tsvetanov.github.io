#include <iostream>
using namespace std;
int main () {
    long long a,b;
    cin >> a >> b;
    if (a==6) {
        a=9;
    }
    if (b==6) {
        b=9;
    }
    if (a*10+b*1>=b*10+a*1) {
        cout <<a*10+b*1 << endl;
    }
    else if (a*10+b*1<=b*10+a*1) {
        cout << b*10+a*1 << endl;
    }

    return 0;
}
