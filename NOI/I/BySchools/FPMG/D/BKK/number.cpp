#include <iostream>
using namespace std;

int main () {
    long long m, n, low, up;
    cin >> m >> n;
    for (low=2; low*(low+1)<m; low++) {}
    for (up=low; up*(up+1)<=n; up++) {}
    cout << up-low << endl;
}
