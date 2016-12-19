#include <iostream>
using namespace std;

int main () {
    long long n, m, hands, zdr;
    cin >> n >> m;

    hands=n*(n-1);
    hands/=2;
    zdr=m*(m-1) + 2*m*n;

    cout << hands << ' ' << zdr << endl;
    return 0;
}
