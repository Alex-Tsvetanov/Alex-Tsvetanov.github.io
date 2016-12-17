#include <iostream>
using namespace std;

int main () {
    long long n, m;
    cin >> n >> m;
    cout << (n-1)*n/2 << " " << m*(2*n+m-1) << endl;
    return 0;
}

